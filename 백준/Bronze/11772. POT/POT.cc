#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    long long sum = 0;
    for (int i = 0; i < N;i++)
{
int temp;
cin>> temp;
sum+= pow(temp / 10, temp % 10);
    }
    cout << sum << "\n";
    return 0;
}