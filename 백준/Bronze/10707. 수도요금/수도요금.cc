#include <iostream>

using namespace std;

int main()
{      
    int A,B,C,D,P;
    cin >> A >> B >> C >> D >> P;
    int X = P*A;
    int Y;
    if(C < P)
        Y = B + ((P - C) * D);
    else
        Y = B;

    int result = X > Y ? Y : X;
    cout << result << endl;
    return 0;
}