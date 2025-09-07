#include <iostream>
using namespace std;

int main() {
    long long int N, M;
    cin >> N >> M;
    
    auto total_cells = N * M;
  
    auto max_tiles = total_cells / 2;
    
    cout << max_tiles;
    
    return 0;
}