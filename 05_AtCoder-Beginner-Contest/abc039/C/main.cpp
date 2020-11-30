#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    s += s;

    int cnt = 0;
    REP(i, s.size() - 5) {
        if (s[i + 1] == 'B' && s[i + 3] == 'B' && s[i + 5] == 'B') {
            cnt = i;
            break ;
        }
    }

    vector<string> scale(12);
    scale[5] = "Do";
    scale[3] = "Re";
    scale[1] = "Mi";
    scale[0] = "Fa";
    scale[10] = "So";
    scale[8] = "La";
    scale[6] = "Si";

    cout << scale[cnt % 12] << '\n';
    return 0;
}
