#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(int num) {
    // 음수는 팰린드롬수가 아니다
    if (num < 0) {
        return false;
    }

    int original = num;
    int reversed = 0;

    // 숫자를 뒤집는다
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // 원본과 뒤집은 수가 같은지 확인
    return original == reversed;
}

int main(){

    int userInput;
    while (true) {
        
        cin >> userInput;
        if (userInput == 0) {
            break;
        }
        if (isPalindrome(userInput)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}