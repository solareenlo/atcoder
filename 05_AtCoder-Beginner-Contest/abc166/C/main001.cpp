#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> h(n);
    vector<bool> ok(n, true);
    REP(i, n) cin >> h[i];

    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        if (h[a] <= h[b]) ok[a] = false;
        if (h[b] <= h[a]) ok[b] = false;
    }

    int count = 0;
    REP(i, n) if (ok[i]) count++;

    cout << count << '\n';
    return 0;
}
