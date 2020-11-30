#include "bits/stdc++.h"
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int j;
    int tmp = numeric_limits<int>::max();
    for (int i = 1; i * i <= n; i++) {
        j = n / i;
        tmp = min(tmp, j - i + n - i * j);
    }
    cout << tmp << '\n';
    return 0;
}
