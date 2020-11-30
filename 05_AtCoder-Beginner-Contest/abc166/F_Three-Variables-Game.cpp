// Reference: https://atcoder.jp/contests/abc166/submissions/12783392
#include "bits/stdc++.h"
using namespace std;

int main(void) {
    int n, A, B, C;
    cin >> n >> A >> B >> C;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<char> ans;
    vector<int> rem = {A, B, C};

    auto dfs = [&](auto f, int idx) -> void {
        if (idx == n) {
            cout << "Yes" << endl;
            for (char c : ans) {
                cout << c << endl;
            }
            exit(0);
        }
        int x = s[idx][0] - 'A';
        int y = s[idx][1] - 'A';
        for (int i = 0; i < 2; i++) {
            if (rem[x] > 0) {
                ans.push_back('A' + y);
                rem[x]--;
                rem[y]++;
                f(f, idx + 1);
                rem[x]++;
                rem[y]--;
                ans.pop_back();
            }
            swap(x, y);
        }
    };
    dfs(dfs, 0);
    cout << "No" << endl;
    return 0;
}
