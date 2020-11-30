#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> l(n);
    REP(i, n) cin >> l[i];

    vector<vector<int> > comb = makeComb(n, 3);
    REP(i, comb.size()) REP(j, 3) comb[i][j]--;

    int count = 0;
    if (comb.size() == 1) {
        int a = l[comb[0][0]];
        int b = l[comb[0][1]];
        int c = l[comb[0][2]];
        if ((a < b + c) && (b < c + a) && (c < a + b))
            count++;
    } else {
        REP(i, comb.size()) {
            int a = l[comb[i][0]];
            int b = l[comb[i][1]];
            int c = l[comb[i][2]];
            if ((a < b + c) && (b < c + a) && (c < a + b))
                count++;
        }
    }

    cout << count << '\n';
    return 0;
}
