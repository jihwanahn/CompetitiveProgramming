#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    int arr[10];
    cin >> n ;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int ans = -1;
    sort(arr,arr+n); // [1]

    do {
        int tmp = 0;
        for(int i=0; i<n-1; i++){
            tmp += abs(arr[i] - arr[i+1]);
        }
        ans = max(ans,tmp);

    } while (next_permutation(arr, arr+n)); // [2]

    cout << ans << endl;
    return 0;
}