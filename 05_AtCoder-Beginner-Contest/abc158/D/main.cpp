#include <algorithm>
#include <iostream>
#include <utility>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s1; cin >> s1;
    int n; cin >> n;
    // 先頭に文字を加える用の文字列
    // この文字列の後ろに文字を追加するということは，
    // s1 の先頭に文字を追加したということ．
    string s2;

    REP(i, n) {
        int t; cin >> t;
        if (t == 1) swap(s1, s2);
        else {
            int f; cin >> f;
            char c; cin >> c;
            if (f == 1) s2 += c;
            else s1 += c;
        }
    }

    reverse(s2.begin(), s2.end());
    cout << s2 << s1 << endl;
    return 0;
}
