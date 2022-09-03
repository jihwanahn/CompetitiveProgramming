#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);


  int A, B, C;
  cin >> A >> B >> C;
  
  int multi = A * B * C;
  string multi2 = to_string(multi);

  vector<int> a;
  for(int i = 0 ; i < multi2.size(); i++){
    a.emplace_back(multi2[i]);  
  }
  
  vector<int> zero2nine(10,0);
  
  for(int i = 0 ; i < a.size(); i++){
    zero2nine[a[i]-48] += 1;
  }

  for(int i = 0; i < zero2nine.size(); i++)
    cout << zero2nine[i] << "\n";
  
	return 0;
}