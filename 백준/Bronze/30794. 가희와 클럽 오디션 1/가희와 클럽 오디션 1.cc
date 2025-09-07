#include <iostream>

using namespace std;

int main()
{      
    int lv;
    string score;
    cin >> lv >> score;

    if(score == "miss")
    {
        cout << 0*lv;
    }
    else if(score == "bad")
    {
        cout << 200*lv;
    }
    else if(score == "cool")
    {
        cout << 400*lv;
    }
    else if(score == "great"){
        cout << 600*lv;
    }
    else if(score == "perfect"){
        cout << 1000*lv;
    }
    return 0;
}