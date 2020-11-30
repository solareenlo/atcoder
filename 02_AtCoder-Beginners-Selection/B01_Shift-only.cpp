#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

const int INF = 1 << 30;

template<class T, class U> inline int divCount(T &num, U divisor) {
    int count = 0;
    while (num % divisor == 0) {
        num /= divisor;
        count++;
    }
    return count;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int A[N]; REP(i, N) cin >> A[i];

    int ans = INF;
    REP(i, N) {
        int tmp = 0;
        tmp = divCount(A[i], 2);
        ans = min(ans, tmp);
    }

    cout << ans << '\n';
    return 0;
}
