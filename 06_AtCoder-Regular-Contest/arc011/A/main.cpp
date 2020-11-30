#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int m, n, N;
    cin >> m >> n >> N;

    int sale = N;
    int notSale = 0;
    while ((sale + notSale) / m > 0) {
        int div = (sale + notSale) / m;
        int rem = (sale + notSale) % m;
        notSale = 0;
        sale = div * n;
        notSale = rem;
        N += sale;
    }

    cout << N << '\n';
    return 0;
}
