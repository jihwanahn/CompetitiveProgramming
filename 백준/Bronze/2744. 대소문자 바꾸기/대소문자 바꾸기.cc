#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);

  string a;
  cin >> a;

  for(int i = 0 ; i< a.size(); i++)
    {
      if(isalpha(a[i]) && isupper(a[i]))
      {
        a[i] = tolower(a[i]);
      }
      else if(isalpha(a[i]) && islower(a[i]))
      {
        a[i] = toupper(a[i]);
      }
    }
  cout << a;
	return 0;
}