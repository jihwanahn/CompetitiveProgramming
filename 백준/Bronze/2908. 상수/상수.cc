#include <iostream>
 
using namespace std;

int flipNum(int num){
  int temp = 0;
  temp = (num / 100 + (num % 100) - (num % 10) + (num % 10) * 100);
  return temp;
}

int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);


  int A, B;
  cin >> A >> B;
  
  A = flipNum(A);
  B = flipNum(B);

  cout << (A > B ? A : B);
  
	return 0;
}