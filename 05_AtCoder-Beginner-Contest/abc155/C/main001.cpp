#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    map<string, int> count;
    REP(i, n) {
        string s; cin >> s;
        count[s]++;
    }

    int maxi = 0;
    for (auto i : count)
        maxi = max(maxi, i.second);

    for (auto i : count)
        if (i.second == maxi)
            cout << i.first << '\n';
    return 0;
}
