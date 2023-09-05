#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>> graph(n + 1, vector<int>());
    vector<int> distance(n + 1, -1); // 1번 노드로부터의 거리. -1은 아직 방문하지 않은 상태를 의미.
    queue<int> q;

    // 그래프 생성
    for (auto& e : edge) {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }

    // BFS 시작
    q.push(1);
    distance[1] = 0;
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int next : graph[current]) {
            if (distance[next] == -1) { // 아직 방문하지 않은 노드라면
                distance[next] = distance[current] + 1;
                q.push(next);
            }
        }
    }

    // 가장 멀리 떨어진 노드의 거리 찾기
    int maxDist = *max_element(distance.begin(), distance.end());
    answer = count(distance.begin(), distance.end(), maxDist);

    return answer;
}
