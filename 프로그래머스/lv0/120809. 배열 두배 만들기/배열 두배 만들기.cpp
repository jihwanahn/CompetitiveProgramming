#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        answer.push_back(*it * 2);
    }
    return answer;
}