#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
                    // 원본 벡터         i j k 벡터
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++) 
    {
        vector<int> ijk;
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++) { ijk.push_back(array[j]); }
        sort(ijk.begin(), ijk.end());
        answer.push_back(ijk[commands[i][2] - 1]);
    }
    return answer;
}