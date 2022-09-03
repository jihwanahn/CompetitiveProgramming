#include <iostream>
#include <vector>
 
using namespace std;

void printRecurseNum(int& num){
  while(num > 0){
    cout << num << "\n";
    num--;
  }  
}

int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);

  int A;
  cin >> A;
  
  printRecurseNum(A);
	return 0;
}