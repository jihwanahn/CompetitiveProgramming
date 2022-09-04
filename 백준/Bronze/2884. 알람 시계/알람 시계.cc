#include <iostream>

using namespace std;

void newAlarm(int num1, int num2){
  if(num1 == 0){
    if(num2 >= 45)
      cout<< num1 << " " << num2 -45;
    else
      cout << 23 << " " << num2 + 15;
  }
  else{
    if(num2 >= 45)
      cout << num1 << " " << num2 - 45;
    else
      cout << num1 - 1 << " " << num2 + 15;
  }
}

int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);

  int H , M;
  cin >> H >> M;

  newAlarm(H, M);

	return 0;
}