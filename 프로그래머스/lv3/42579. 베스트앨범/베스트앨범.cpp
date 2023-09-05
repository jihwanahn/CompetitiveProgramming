#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> genrePlayCount;
    unordered_map<string, vector<pair<int, int>>> songsInGenre;

    int n = genres.size();
    for (int i = 0; i < n; ++i) {
        genrePlayCount[genres[i]] += plays[i];
        songsInGenre[genres[i]].push_back({plays[i], i});
    }

    // 장르별로 노래를 재생 횟수와 고유 번호를 기준으로 정렬
    for (auto& [genre, songs] : songsInGenre) {
        sort(songs.begin(), songs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first == b.first ? a.second < b.second : a.first > b.first;
        });
    }

    // 가장 많이 재생된 장르 순으로 정렬
    vector<string> genresSorted;
    for (const auto& [genre, _] : genrePlayCount) {
        genresSorted.push_back(genre);
    }
    sort(genresSorted.begin(), genresSorted.end(), [&](const string& a, const string& b) {
        return genrePlayCount[a] > genrePlayCount[b];
    });

    // 베스트 앨범 구성
    vector<int> answer;
    for (const auto& genre : genresSorted) {
        int count = 0;
        for (const auto& [play, idx] : songsInGenre[genre]) {
            if (count == 2) break;
            answer.push_back(idx);
            count++;
        }
    }

    return answer;
}
