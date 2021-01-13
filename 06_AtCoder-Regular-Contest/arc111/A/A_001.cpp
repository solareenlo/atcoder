#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int64_t n, m; std::cin >> n >> m;
	cout << pow_mod(10, n, m*m) / m << '\n';
    return 0;
}
