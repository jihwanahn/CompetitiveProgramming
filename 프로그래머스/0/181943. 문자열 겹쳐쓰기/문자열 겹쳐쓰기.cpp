#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer.resize(my_string.size());
    int temp = 0;
    for (int i = 0 ; i < my_string.size() ;i++)
    {
        if(i >= s && i < overwrite_string.size()+s)
        {
            answer[i] = overwrite_string[temp];
            temp++;
        }
        else answer[i]= my_string[i];
        
    }
    
    return answer;
}