#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <typeinfo>

using namespace std;

long long solution(long long n) {    
    long long i = sqrt(n);
    cout << n << " " << i;
    if(i*i == n)
    {
        return (i+1)*(i+1);
    }
    else return -1;
}