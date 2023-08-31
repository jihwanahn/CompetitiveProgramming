#include <string>
#include <vector>
#include <algorithm>  // for min function

using namespace std;

int solution(int N, int number) {
    const int INF = 987654321;  // An arbitrary large value
    vector<vector<int>> dp(9, vector<int>());

    // Initialize the base case
    dp[1].push_back(N);

    // Fill up the dp array
    for (int i = 2; i <= 8; ++i) {
        int num = 0;
        for (int j = 0; j < i; ++j) {
            num = num * 10 + N;
        }
        dp[i].push_back(num);
        
        for (int j = 1; j <= i / 2; ++j) {
            for (int a : dp[j]) {
                for (int b : dp[i - j]) {
                    dp[i].push_back(a + b);
                    dp[i].push_back(a - b);
                    dp[i].push_back(b - a);
                    dp[i].push_back(a * b);
                    if (b != 0) dp[i].push_back(a / b);
                    if (a != 0) dp[i].push_back(b / a);
                }
            }
        }
        
        sort(dp[i].begin(), dp[i].end());
        dp[i].erase(unique(dp[i].begin(), dp[i].end()), dp[i].end());
    }

    // Check if number can be expressed using N
    for (int i = 1; i <= 8; ++i) {
        for (int j : dp[i]) {
            if (j == number) {
                return i;
            }
        }
    }

    return -1;  // If impossible
}
