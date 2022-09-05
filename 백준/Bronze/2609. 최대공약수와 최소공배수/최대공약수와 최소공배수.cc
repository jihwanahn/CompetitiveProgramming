#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int range = min(n, m);
    int res1 = 1, res2=0;
     
    for(int i = 1 ; i <= range ; ++i) {
        if(n % i == 0 && m % i == 0){
            res1 = i;
        }
    }
    cout << res1 << endl;
    res2 = m * n / res1;
    cout << res2 << endl;
    
    
    return 0;
}