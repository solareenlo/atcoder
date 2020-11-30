// 重複を許す組合せを深さ優先探索で全探索して，
// 条件に合致する組合せを数えてる
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> graph) {
    if (graph.size() == n + 1) { // n + 1 の深さまで来たら計算して return する
        int sum = 0;
        REP(i, q)
            if (graph[b[i]] - graph[a[i]] == c[i])
                sum += d[i];
        ans = max(ans, sum);
        return ;
    }
    graph.push_back(graph.back()); // 重複を許すので最後と同じものから探索を行う
    while (graph.back() <= m) { // ツリーの横の個数の上限を設定してる
        dfs(graph);
        graph.back()++; // ツリーの横の値を1つずつ増やして探索してる
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(vector<int>(1, 1));

    cout << ans << '\n';
    return 0;
}
