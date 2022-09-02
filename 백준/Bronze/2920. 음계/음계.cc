#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ascending = {1,2,3,4,5,6,7,8};
  vector<int> descending = {8,7,6,5,4,3,2,1};

  vector<int> inputNum(8);
  
  for(int i = 0; i < inputNum.size(); i++)
    {
      cin >> inputNum.at(i);
    }

  string result;

  result = (inputNum == ascending ? "ascending" : (inputNum == descending ? "descending" : "mixed"));

    cout << result;
  return 0;
}