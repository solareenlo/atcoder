#include "bits/stdc++.h"
using namespace std;

const int INF = numeric_limits<int>::max();

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int W[N];
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }
    int result = INF;
    for (int t = 0; t < N; t++) {
        int i_sum = 0;
        for (int i = 0; i < t; i++) {
            i_sum += W[i];
        }
        int j_sum = 0;
        for (int j = t; j < N; j++) {
            j_sum += W[j];
        }
        result = min(result, abs(i_sum - j_sum));
    }
    cout << result << '\n';
    return 0;
}
