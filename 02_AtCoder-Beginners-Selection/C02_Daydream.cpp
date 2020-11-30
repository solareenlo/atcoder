#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    // 後ろから探索できるように全ての文字列を左右反転する
    reverse(s.begin(), s.end());
    REP(i, 4) {
        reverse(divide[i].begin(), divide[i].end());
    }

    // 端から切っていく
    bool can = true;
    for (int i = 0; i < s.size();) {
        bool can2 = false; // 4 つの文字列のうちどれかで分割できるかどうか
        REP(j, 4) {
            string div = divide[j];
            if (s.substr(i, div.size()) == div) { // div で分割できたら
                can2 = true;
                i += div.size(); // 分割できたら文字数分だけ i を進める
            }
        }
        if (!can2) { // 4つの文字列全てで分割できなかったら
            can = false;
            break ;
        }
    }

    if (can)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}
