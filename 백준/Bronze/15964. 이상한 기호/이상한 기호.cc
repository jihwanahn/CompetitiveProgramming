#include <iostream>

long customOperator(long A, long B) {
  return (A+B)*(A-B);
}

auto main() -> int{
  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  long A, B;
  std::cin >> A >> B;

  std::cout << customOperator(A, B);
  
  return 0;
}