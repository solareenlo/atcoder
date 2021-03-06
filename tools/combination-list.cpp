// 組合せ一覧を表示する
#include <iostream>
#include <vector>
using namespace std;

void makeCombUtil(vector<vector<int> > &ans, vector<int> &tmp, int n, int left, int k) {
    if (k == 0) {
        ans.push_back(tmp);
        return ;
    }
    for (int i = left; i <= n; ++i) {
        tmp.push_back(i);
        makeCombUtil(ans, tmp, n, i + 1, k - 1);
        tmp.pop_back();
    }
}

vector<vector<int> > makeComb(int n, int k) {
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombUtil(ans, tmp, n, 1, k);
    return ans;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    vector<vector<int> > ans = makeComb(N, K);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans.at(i).at(j) << ' ';
        }
        cout << endl;
    }
    return 0;
}
