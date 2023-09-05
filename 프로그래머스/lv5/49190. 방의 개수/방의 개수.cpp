#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int solution(vector<int> arrows) {
    int answer = 0;
    int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1}; // x축 이동
    int dy[] = {0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1, -1}; // y축 이동

    int x = 0, y = 0;
    set<pair<int, int>> visitedNodes;
    set<pair<pair<int, int>, pair<int, int>>> visitedEdges;

    visitedNodes.insert({x, y});

    for (int i = 0; i < arrows.size(); i++) {
        for (int j = 0; j < 2; j++) { // 중간 점을 고려하기 위해 2번 이동
            int nx = x + dx[arrows[i]];
            int ny = y + dy[arrows[i]];

            if (visitedEdges.find({{x, y}, {nx, ny}}) == visitedEdges.end()) {
                if (visitedNodes.find({nx, ny}) != visitedNodes.end()) {
                    answer++;
                }

                visitedEdges.insert({{x, y}, {nx, ny}});
                visitedEdges.insert({{nx, ny}, {x, y}});
                visitedNodes.insert({nx, ny});
            }

            x = nx;
            y = ny;
        }
    }

    return answer;
}
