#include <iostream>

auto main() -> int{
  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);
  
  int N, X;
  std::cin >> N >> X;
  
  int A[N];
  for(int i = 0 ; i < N ; i++) {
    std::cin >> A[i];
  }

  for(auto i : A) {
    if(i < X) {
      std::cout << i << " ";
    }
  }
  return 0;
}