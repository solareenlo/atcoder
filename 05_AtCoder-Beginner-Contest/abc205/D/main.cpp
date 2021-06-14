// Copyright
#include <algorithm>
#include <iostream>

int64_t A[100001], n, q, i, k;

int main() {
    std::cin >> n >> q;
    for (; i < n; i++) {
        std::cin >> A[i];
        A[i] -= i;
    }
    while (q--) {
        std::cin >> k;
        std::cout << k + std::upper_bound(A, A+n, k)-A << '\n';
    }
    return 0;
}
