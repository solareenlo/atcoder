#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    vector<int> dp(N + 1, 0);

    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i + A[i] <= N)
            dp[i + A[i]]++;
        int j = i + 1;
        if (j - A[j] >= 1 && j - A[j] <= N)
            ans += dp[j - A[j]];
    }

    cout << ans << endl;
    return 0;
}
