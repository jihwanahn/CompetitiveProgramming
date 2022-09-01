#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

  int N, v;
  cin >> N;

  vector<int> v1;
  
  for(int i = 0 ; i < N ; i++)
    {
      cin >> v1.emplace_back(i);
    }
  cin >> v;

  int ans = 0;

  for(int i : v1)
    {
      if(i == v)
        ans++;
    }

  cout << ans;
  return 0;
}