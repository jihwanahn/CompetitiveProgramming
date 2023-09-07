#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 모든 학생이 체육복을 1개씩 가지고 있다고 가정
    vector<int> clothes(n, 1);
    
    // 잃어버린 학생의 체육복 수를 0으로 설정
    for(int i : lost) {
        clothes[i-1]--;
    }

    // 여벌의 체육복을 가진 학생의 체육복 수를 2로 설정
    for(int i : reserve) {
        clothes[i-1]++;
    }

    for(int i = 0; i < n; i++) {
        // 체육복을 잃어버리고 여벌도 없는 학생을 찾는다.
        if(clothes[i] == 0) {
            // 앞 학생에게 체육복을 빌릴 수 있는지 확인
            if(i - 1 >= 0 && clothes[i-1] == 2) {
                clothes[i-1]--;
                clothes[i]++;
            }
            // 뒷 학생에게 체육복을 빌릴 수 있는지 확인
            else if(i + 1 < n && clothes[i+1] == 2) {
                clothes[i+1]--;
                clothes[i]++;
            }
        }
    }
    
    // 체육복을 가진 학생 수를 카운트
    int answer = 0;
    for(int i = 0; i < n; i++) {
        if(clothes[i] >= 1) {
            answer++;
        }
    }
    return answer;
}
