#include <iostream>
#include <map>
#include <utility>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    map<pair<string, int>, int> m;
    REP(i, n) {
        string town;
        int score;
        cin >> town >> score;
        pair<string, int> tmp = make_pair(town, 100 - score);
        m[tmp] = i;
    }
    for (auto itr = m.begin(); itr != m.end(); itr++)
        cout << itr->second + 1 << '\n';
    return 0;
}
