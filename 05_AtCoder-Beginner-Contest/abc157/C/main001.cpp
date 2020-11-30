#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    map<int, int> num;
    REP(i, n) num.insert(make_pair(i + 1, -1));

    bool ans = true;
    REP(i, m) {
        int s, c; cin >> s >> c;
        if (num[s] != -1 && num[s] != c)  ans = false;
        else num[s] = c;
        if (n == 3 && s == 1 && c == 0) ans = false;
        if (n == 2 && s == 1 && c == 0) ans = false;
    }

    if (ans) {
        if (n != 1 && num[1] == -1) num[1] = 1;
        string s;
        for (auto itr = num.begin(); itr != num.end(); itr++) {
            if (itr->second == -1) s += '0';
            else s += itr->second + '0';
        }
        cout << stoi(s) << '\n';
    } else
        cout << -1 << '\n';
    return 0;
}
