#include <iostream>
#include <vector>
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

vector<vector<int> > makeCombi(int n, int k) {
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

int main(void) {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> a(Q), b(Q), c(Q), d(Q);
    for (int i = 0; i < Q; i++)
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    vector<vector<int> > ans = makeCombi(M, N);
    int max = 0;
    for (long unsigned int i = 0; i < ans.size(); i++) {
        // for (int j = 0; j < ans[i].size(); j++) {
        //     cout << ans.at(i).at(j) << " ";
        // }
        int sum = 0;
        for (int j = 0; j < Q; j++) {
            if (ans.at(i).at(b.at(j)-1) - ans.at(i).at(a.at(j)-1) == c.at(j))
                sum += d.at(j);
        }
        if (max < sum)
            max = sum;
        // cout << sum;
        // cout << endl;
    }
    cout << max << endl;
    return 0;
}
