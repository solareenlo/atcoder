#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<int, int> ans;
    REP(i, n + 1)
        ans.insert(make_pair(i, 0));
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        ans[a]++;
        ans[b]++;
    }

    REP(i, n + 1) {
        if (i == 0) continue ;
        cout << ans[i] << '\n';
    }
    return 0;
}
