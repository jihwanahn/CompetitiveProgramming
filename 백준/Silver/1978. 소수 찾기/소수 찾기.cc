#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, num;
    cin >> N;

    int cnt = 0;
    int i;
    while(N--){
    cin >> num;
    for(i = 2; i < num; ++i){
      if(num%i == 0) {
        break;
      }
    }
    if(num == i) {
        cnt++;
    }
    }
    cout << cnt;
    return 0;
}