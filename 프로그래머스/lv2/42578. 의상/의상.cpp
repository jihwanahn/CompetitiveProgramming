#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> clothesMap;

    // 각 의상의 종류별로 몇 개의 의상이 있는지 계산
    for (const auto& cloth : clothes) {
        clothesMap[cloth[1]]++;
    }

    int answer = 1;
    // 각 종류별로 의상을 입거나 입지 않는 경우의 수를 계산
    for (const auto& [type, count] : clothesMap) {
        answer *= (count + 1);
    }

    // 아무것도 입지 않는 경우를 제외하고 결과를 반환
    return answer - 1;
}
