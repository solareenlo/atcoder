#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int cnt = 0;

    string tmp;
    REP(i, s.size()) {
        if (s[i] != '+') {
            tmp.push_back(s[i]);
        } else {
            bool isZero = false;
            for (int j = 0; j < tmp.size(); j += 2)
                if (tmp[j] == '0')
                    isZero = true;
            if (!(isZero)) cnt++;
            tmp.clear();
        }
    }
    bool isZero = false;
    for (int j = 0; j < tmp.size(); j += 2)
        if (tmp[j] == '0')
            isZero = true;
    if (!(isZero)) cnt++;

    cout << cnt << '\n';
    return 0;
}
