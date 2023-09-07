#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Union-Find를 위한 부모 노드 정보
vector<int> parent;

// 부모 노드를 찾는 함수
int find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

// 두 노드의 부모 노드를 합치는(Union) 함수
void merge(int u, int v) {
    u = find(u);
    v = find(v);
    parent[u] = v;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;

    // 초기화: 각 노드의 부모는 자신입니다.
    parent = vector<int>(n);
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }

    // 비용을 기준으로 오름차순 정렬
    sort(costs.begin(), costs.end(), [](vector<int> a, vector<int> b) {
        return a[2] < b[2];
    });

    for(auto cost : costs) {
        int u = cost[0], v = cost[1], c = cost[2];
        // 이미 연결된 노드가 아니라면 연결
        if(find(u) != find(v)) {
            merge(u, v);
            answer += c;
        }
    }
    return answer;
}
