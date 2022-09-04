#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int modNum(int num){
  int temp = 0;
  temp = (num % 42);
  return temp;
}

int main(int argc, const char * argv[]) {
  cin.tie(NULL);
  cin.sync_with_stdio(0);


  vector<int> nums;
  int count {10};

  while (count > 0){
    cin >> nums.emplace_back(count);
    count--;
  }

  unordered_set<int> result;
  for(auto i : nums){
    i = modNum(i);
    result.insert(i);
  }

  cout << result.size();  
  
	return 0;
}