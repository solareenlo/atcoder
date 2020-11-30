// 重複を許す組合せを深さ優先探索で全探索して，
// 条件に合致する組合せを数えてる
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int n, m, q;
vector<int> a, b, c, d;
int ans;

// 深さ優先探索で全探索している
void dfs(vector<int> A) {
    if (A.size() == n + 1) { // n の深さまで来たら計算して return する
        int now = 0;
        REP(i, q) if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
        ans = max(ans, now);
        return ;
    }

    A.push_back(A.back());
    while (A.back() <= m) { // ツリー表示における横の個数の上限を定めている
        dfs(A);
        A.back()++; // ツリー表示における横の数を1ずつ増やしている
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> q;

    a = b = c = d = vector<int>(q);
    REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(vector<int>(1, 1));

    cout << ans << '\n';
    return 0;
}
