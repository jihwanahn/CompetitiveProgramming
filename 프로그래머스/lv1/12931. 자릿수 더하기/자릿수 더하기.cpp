#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    answer += n%10;
     while( n /= 10)
     {
         answer += n%10;
         cout << n << "\n";
     }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    
    
    return answer;
}