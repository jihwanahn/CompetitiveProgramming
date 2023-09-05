#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    for (int y = triangle.size() - 2; y >= 0; --y) {
        for (int x = 0; x < triangle[y].size(); ++x) {
            triangle[y][x] += max(triangle[y+1][x], triangle[y+1][x+1]);
        }
    }
    return triangle[0][0];
}
