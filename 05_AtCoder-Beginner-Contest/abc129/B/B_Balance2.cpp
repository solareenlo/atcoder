#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> a(N);
    int sum = 0;

    for (int i = 0; i <N; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int mini = sum;
    int prefix_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        prefix_sum += a[i];
        mini = min(mini, abs(prefix_sum - (sum - prefix_sum)));
    }

    cout << mini << '\n';
    return 0;
}
