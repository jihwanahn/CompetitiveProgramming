#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> input)
{
  int temp {0};
  for(auto i : input)
    {
      // cout << i << " ";
      temp += i; 
    }
  // cout << "\n";
  return temp;
}

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int N;
  cin >> N;
  string number;
  cin >> number;
  
  vector<int> nums;

  
  for(int i = 0; i < N ; i++)
    {
      nums.emplace_back(static_cast<int>(number[i])-48);
    }

  cout << sum(nums);  
  
  return 0;
}
