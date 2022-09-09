#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);

  int T;
  cin >> T;

  while(T > 0){
    string a;
    cin >> a;
    cout << a[0] << a[a.size()-1] << "\n";
    T--;
  }

	return 0;
}