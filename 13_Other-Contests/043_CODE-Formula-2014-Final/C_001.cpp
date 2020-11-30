#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<string> s;
    string tmp, str;
    getline(cin, tmp);
    stringstream ss{tmp};

    while (getline(ss, str, ' ')) {
        s.push_back(str);
    }

    int n = s.size();

    set<string> ans;
    REP(i, n) {
        int num = s[i].size();
        REP(j, num) {
            string tmp;
            int index = 0;
            if (s[i][j] == '@') {
                for (int k = j + 1; k < num; k++) {
                    if (s[i][k] != '@')
                        tmp.push_back(s[i][k]);
                    else  {
                        index = k - (j + 1);
                        break ;
                    }
                }
                j += index;
                ans.insert(tmp);
            }
        }
    }

    for (auto x : ans)
        if (x != "")
            cout << x << '\n';
    return 0;
}
