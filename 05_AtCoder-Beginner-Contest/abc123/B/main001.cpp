#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> a(5);
    REP(i, 5) cin >> a[i];

    int mini = 10;
    int index = 0;
    int count = 0;
    REP(i, 5) {
        if (a[i] % 10 == 0) continue ;
        if (a[i] % 10 < mini) {
            index = i;
            count++;
            mini = a[i] % 10;
        }
    }

    int sum = 0;
    if (count) {
        REP(i, 5)
            if (i != index)
                if (a[i] % 10) a[i] += 10 - (a[i] % 10);
        sum = accumulate(a.begin(), a.end(), 0);
    } else {
        sum = accumulate(a.begin(), a.end(), 0);
    }

    cout << sum << '\n';
    return 0;
}
