#include "bits/stdc++.h"
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

bool check(vector<P> s) {
    int h = 0;
    for (P p : s) {
        int b = h + p.first;
        if (b < 0) {
            return false;
        }
        h += p.second;
    }
    return true;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<P> up, down;
    int total = 0;

    REP(i, n) {
        string s;
        cin >> s;
        int h = 0, b = 0;
        for (char c : s) {
            if (c == '(') {
                h++;
            } else {
                h--;
            }
            b = min(b, h);
        }
        if (h > 0) {
            up.emplace_back(b, h); // 左側から見たときのボトムと高さを入れる
        } else {
            down.emplace_back(b - h, -h); // 右側から見たときのボトムと高さを入れる
        }
        total += h;
    }

    sort(up.rbegin(), up.rend());
    sort(down.rbegin(), down.rend());
    if (check(up) && check(down) && total == 0) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}
