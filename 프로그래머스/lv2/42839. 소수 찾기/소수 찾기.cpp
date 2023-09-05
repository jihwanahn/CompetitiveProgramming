#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_set>

using namespace std;

// Check if n is a prime number
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int sqrtn = sqrt(n);
    for (int i = 3; i <= sqrtn; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    unordered_set<int> possible_numbers;
    
    // Generate all possible permutations
    sort(numbers.begin(), numbers.end());
    do {
        for (int i = 1; i <= numbers.size(); ++i) {
            int num = stoi(numbers.substr(0, i));
            possible_numbers.insert(num);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    // Count primes
    int prime_count = 0;
    for (int num : possible_numbers) {
        if (isPrime(num)) prime_count++;
    }
    
    return prime_count;
}