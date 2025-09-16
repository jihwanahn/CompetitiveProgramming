#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  bool isFail = false;
  for (int i = 0; i < 8; i++) {
    int bit; cin >> bit;

    if (bit == 9) isFail = true;
  }

  if (isFail) cout << "F\n";
  else cout << "S\n";

  return 0;
}