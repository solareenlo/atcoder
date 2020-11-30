#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int diff = 2025 - n;

    for (int i = 1; i < 10; i++) {
        if (diff % i == 0 && diff / i < 10)
            cout << i << " x " << diff / i << '\n';
    }
    return 0;
}
