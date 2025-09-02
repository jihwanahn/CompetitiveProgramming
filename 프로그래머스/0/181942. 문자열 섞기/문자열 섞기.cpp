#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    
    for(int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str2.size(); j++ ) {
            if(i==j){
                answer+=(str1[i]);
                answer+=(str2[j]);
            }
        }
    }
    return answer;
}