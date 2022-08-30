#include <iostream>

auto main() -> int {
    int N;
    std::cin >> N;
    int i = 0;
    while(i < N) {
        std::cout << i+1 << "\n";
        i++;
    }
    
    return 0;
}