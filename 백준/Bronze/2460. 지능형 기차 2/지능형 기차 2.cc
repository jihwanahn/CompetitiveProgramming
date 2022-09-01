#include <bits/stdc++.h>

using namespace std;

int main() {
    int curMax=0;
    int res=0;
    for(int i = 0; i < 10; ++i){
        int x, y;
        cin >> x >> y;
        curMax += (y-x);
        if(curMax > res){res = curMax;}
    }
    
    cout << res;
    return 0;
}