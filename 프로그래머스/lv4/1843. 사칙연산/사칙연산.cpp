#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int solution(vector<string> arr) {
    int n = (arr.size() + 1) / 2;
    vector<vector<int>> dpMax(n, vector<int>(n, -1e9));
    vector<vector<int>> dpMin(n, vector<int>(n, 1e9));

    for (int i = 0; i < n; ++i) {
        dpMax[i][i] = stoi(arr[i * 2]);
        dpMin[i][i] = stoi(arr[i * 2]);
    }

    for (int cnt = 1; cnt < n; ++cnt) {
        for (int i = 0; i < n - cnt; ++i) {
            int j = i + cnt;
            for (int k = i; k < j; ++k) {
                if (arr[k * 2 + 1] == "+") {
                    dpMax[i][j] = max(dpMax[i][j], dpMax[i][k] + dpMax[k + 1][j]);
                    dpMin[i][j] = min(dpMin[i][j], dpMin[i][k] + dpMin[k + 1][j]);
                } else {
                    dpMax[i][j] = max(dpMax[i][j], dpMax[i][k] - dpMin[k + 1][j]);
                    dpMin[i][j] = min(dpMin[i][j], dpMin[i][k] - dpMax[k + 1][j]);
                }
            }
        }
    }

    return dpMax[0][n - 1];
}
