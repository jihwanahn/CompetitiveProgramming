#include <iostream>
#include <cmath>

int main() {
    int M, N;
    std::cin >> M >> N;

    int sum = 0;
    int min_square = -1;

    for (int i = M; i <= N; i++) {
        int root = sqrt(i);
        if (root * root == i) { // Check if i is a perfect square
            sum += i;
            if (min_square == -1) { // If it's the first perfect square we found
                min_square = i;
            }
        }
    }

    if (min_square == -1) { // If no perfect square was found
        std::cout << -1 << std::endl;
    } else {
        std::cout << sum << std::endl;
        std::cout << min_square << std::endl;
    }

    return 0;
}
