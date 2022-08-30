#include <iostream>

using namespace std;

int factorial(int base)
{
    if (base == 0)
    {
        return 1;
    }
    else
    {
      int answer = 1;
      while(base > 0)
      {
        answer *= base;
        base--;
      }
      return answer;
    }    
};

auto main()->int
{
  int N;
  cin >> N;
  
  cout << factorial(N);
  return 0;
}