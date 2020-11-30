#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

vector<vector<int> > sub(20);

int dfs(int id) {
    if (sub[id].size() == 0) return 1;
    int maxP = 0;
    int minP = (int)1e9;
    for (int i : sub[id]) {
        int p = dfs(i);
        maxP = max(maxP, p);
        minP = min(minP, p);
    }
    return maxP + minP + 1;
}


int main() {
    int n;
    cin >> n;

    REP(i, n - 1) {
        int tmp;
        cin >> tmp;
        sub[tmp - 1].push_back(i + 1);
    }

    cout << dfs(0) << '\n';
    return 0;
}
