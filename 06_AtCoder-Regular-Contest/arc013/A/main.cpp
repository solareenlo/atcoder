#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m, l;
    cin >> n >> m >> l;

    vector<int> baggage(3);
    cin >> baggage[0] >> baggage[1] >> baggage[2];

    int maxi = 0;
    REP(i, 5) {
        int divN = n / baggage[0];
        int divM = m / baggage[1];
        int divL = l / baggage[2];
        maxi = max(maxi, divN * divM * divL);
        next_permutation(baggage.begin(), baggage.end());
    }

    cout << maxi << '\n';
    return 0;
}
