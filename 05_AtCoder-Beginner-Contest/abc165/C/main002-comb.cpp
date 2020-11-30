// 重複を許す組合せを全部作成してから，
// 条件に合致する組合せを数えてる
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void makeCombiUtil(vector<vector<int> > &ans, vector<int> &tmp, int n, int left, int k) {
    if (k == 0) {
        ans.push_back(tmp);
        return;
    }
    for (int i = left; i <= n; ++i) {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i, k - 1);
        tmp.pop_back();
    }
}

// n 個の中から k 個取り出す重複を許す組合せを作成する
vector<vector<int> > makeCombi(int n, int k) {
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(q), b(q), c(q), d(q);
    REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<vector<int> > comb = makeCombi(m, n);

    int ans = 0;
    REP(i, comb.size()) {
        int sum = 0;
        REP(j, q)
            if (comb[i][b[j]-1] - comb[i][a[j]-1] == c[j])
                sum += d[j];
        ans = max(ans, sum);
    }

    cout << ans << '\n';
    return 0;
}
