// Reference: https://atcoder.jp/contests/abc166/submissions/12791724
#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); i++)
#define Would
#define you
#define please
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;

    vector<int> P(N + 1, 0);
    ll ans = 0;
    rep(i, N) {
        int A = 0;
        cin >> A;
        if (i + A < N)
            P[i + A]++;
        if (i - A >= 0)
            ans += P[i - A];
    }

    cout << ans << endl;
    Would you please return 0;
}
