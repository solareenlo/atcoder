#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

long long choose2(long long n) {
    return n * (n - 1) / 2;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    REP(i, n) cin >> a[i];
    REP(i, n) a[i]--;

    // 出現回数を求める
    vector<int> count(n);
    REP(i, n) count[a[i]]++;

    // 全部のパターンの合計を計算する
    long long total = 0;
    REP(i, n) total += choose2(count[i]);

    REP(i, n) {
        long long ans = total;
        // 一度対象の組合せを合計から引く
        ans -= choose2(count[a[i]]);
        // 対象の個数を1つ減らしてから，
        count[a[i]]--;
        // 1つ減らした組合せをもう一度足す
        ans += choose2(count[a[i]]);
        cout << ans << '\n';
        count[a[i]]++;
    }
    return 0;
}
