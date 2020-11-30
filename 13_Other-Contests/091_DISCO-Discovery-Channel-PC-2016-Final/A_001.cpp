#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    map<int, int> id;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        int p = 0;
        if (i == 0) p = 100000;
        else if (i == 1) p = 50000;
        else if (i == 2) p = 30000;
        else if (i == 3) p = 20000;
        else if (i == 4) p = 10000;
        id[tmp - 1] = p;
    }

    for (auto x : id)
        cout << x.second << '\n';
    return 0;
}
