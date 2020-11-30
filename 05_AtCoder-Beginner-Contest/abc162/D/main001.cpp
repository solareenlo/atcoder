#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    vector<int> a(n);
    // R, G, B を 3 で割った余りの 1, 2, 0 で分類してる
    REP(i, n) a[i] = s[i] % 3;

    vector<long long> count(3);
    // 1, 2, 0 が何個あるのかを数えてる
    REP(i, n) count[a[i]]++;

    long long ans = 1;
    // とりあえず全ての通りを計算する
    REP(i, 3) ans *= count[i];

    REP(j, n) REP(i, j) { // i < j < n の順番になっている
        int k = j + (j - i); // (j - i) = (k - j) の式変形
        if (k < n) {
            // i, j, k 3つが全て異なることを確認する
            if (a[i] == a[j]) continue ;
            if (a[i] == a[k]) continue ;
            if (a[k] == a[j]) continue ;
            ans--;
        }
    }

    cout << ans << '\n';
    return 0;
}
