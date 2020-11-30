#include "bits/stdc++.h"
using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;
    cout << min(x - 1, n - x) << '\n';
    return 0;
}
