#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> nameCount;

    // 참가자 이름별로 카운트 증가
    for (const string& name : participant) {
        nameCount[name]++;
    }

    // 완주자 이름별로 카운트 감소
    for (const string& name : completion) {
        nameCount[name]--;
    }

    // 완주하지 못한 선수 찾기
    for (const auto& pair : nameCount) {
        if (pair.second > 0) {
            return pair.first;
        }
    }

    return "";
}