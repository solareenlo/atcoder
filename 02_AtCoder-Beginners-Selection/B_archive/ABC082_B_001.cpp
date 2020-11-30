#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;

    vector<char> vecS, vecT;
    REP(i, s.size())
        vecS.push_back(s[i]);
    REP(i, t.size())
        vecT.push_back(t[i]);

    sort(vecS.begin(), vecS.end()); // 昇順ソート
    sort(vecT.begin(), vecT.end(), greater<int>()); // 降順ソート

    bool ans = false;
    if (vecS.size() < vecT.size()) {
        int count = 0;
        for (auto itr = vecS.begin(); itr != vecS.end(); itr++) {
            if (*itr < vecT.at(distance(vecS.begin(), itr))) {
                ans = true;
                break ;
            }
            if (*itr == vecT.at(distance(vecS.begin(), itr)))
                count++;
        }
        if (count == vecS.size())
            ans = true;
    } else {
        for (auto itr = vecT.begin(); itr != vecT.end(); itr++) {
            if (*itr > vecS.at(distance(vecT.begin(), itr))) {
                ans = true;
                break ;
            }
        }
    }

    // REP(i, vecS.size()) cout << vecS[i] << ' ';
    // cout << endl;
    // REP(i, vecT.size()) cout << vecT[i] << ' ';
    // cout << endl;

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
