#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n;
    cin >> n;

    int i = 1;
    int index = 0;
    ll rem = 0LL;
    ll sum = 0LL;
    while (true) {
        sum += pow(26, i);
        if (sum >= n) {
            index = i;
            rem = n - (sum - pow(26, i)) - 1;
            break ;
        }
        i++;
    }
    cout << index << ' ' << rem << '\n';
    return 0;
}
