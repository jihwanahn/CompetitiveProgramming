#include <vector>
#include <iostream>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    std::set<int> unique_pokemons(nums.begin(), nums.end());
    
    // N/2와 폰켓몬의 종류 중 작은 값을 반환
    return std::min(nums.size() / 2, unique_pokemons.size());
}