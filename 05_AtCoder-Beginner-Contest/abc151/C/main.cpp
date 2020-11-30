#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    map<int, string> ac;
    multimap<int, string> wa;
    map<int, bool> hantei;
    REP(i, m) {
        int p; cin >> p;
        string s; cin >> s;
        if (s == "AC") {
            ac[p] = s;
            hantei[p] = true;
        }
        if (s == "WA" && hantei[p] == false)
            wa.emplace(p, s);
    }

    int sum = 0;
    for (auto i : hantei) {
        if (i.second == true)
            sum += wa.count(i.first);
    }

    cout << ac.size() << ' ' << sum << '\n';
    return 0;
}
