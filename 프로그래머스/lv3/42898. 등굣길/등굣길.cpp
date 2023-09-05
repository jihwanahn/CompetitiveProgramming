#include <string>
#include <vector>

using namespace std;

const int MOD = 1'000'000'007;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    // 물에 잠긴 지역 표시
    for (auto& puddle : puddles) {
        dp[puddle[1]][puddle[0]] = -1;
    }

    dp[1][1] = 1;  // 시작 지점

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i == 1 && j == 1) continue;  // 시작 지점은 이미 1로 설정됨
            if (dp[i][j] == -1) {  // 물에 잠긴 지역은 0으로 설정
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
        }
    }

    return dp[n][m];
}
