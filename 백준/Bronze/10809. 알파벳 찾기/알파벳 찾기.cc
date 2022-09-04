#include <iostream>
#include <vector>
#include <map>

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

  string S;
  cin >> S;
  
  map<int, int> alphabetCount;
  
  for(int i = 0 ; i < 26 ; i++)
    alphabetCount[i+97] = -1;

  for(int i = 0; i < S.size(); i++)
  { 
    if(alphabetCount[static_cast<int>(S[i])] == -1)
      alphabetCount[static_cast<int>(S[i])] = i;
    else
      continue;
  }
  
  for(auto i : alphabetCount)
    cout << i.second << " ";

	return 0;
}