#include <iostream>

auto main() -> int{
  int T, A, B;
  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  std::cin >> T;
  while(T > 0){
    std::cin >> A >> B;
    std::cout << (A + B) << "\n";
    --T;
  }
  return 0;
}