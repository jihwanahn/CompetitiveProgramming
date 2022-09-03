#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> num(28);
	int unSubmit[2] = {};
	int cnt = 0;

	for (int i = 0; i < 28; i++)
	{
		cin >> num[i];
	}
	
	for (int i = 1; i <= 30; i++)
	{
		if (find(num.begin(), num.end(), i)==num.end())
		{
			unSubmit[cnt++] = i;
		}
	}

	cout << unSubmit[0] << "\n" << unSubmit[1];
}