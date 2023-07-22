#include <iostream>

int main()
{
    using namespace std;
    
    string st {};
    cin >> st;
    int i {-1};
    cin >> i;
    
    {
        cout << st[i-1];
    }
    
    return 0;
}