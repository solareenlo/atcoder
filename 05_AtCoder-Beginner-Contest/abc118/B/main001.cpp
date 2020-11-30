#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    vector<set<int> > a(n);
    REP(i, n) {
        int k;
        cin >> k;
        REP(j, k) {
            int tmp;
            cin >> tmp;
            a[i].insert(tmp);
        }
    }

    set<int> ans;
    if (n == 1) cout << a[0].size() << '\n';
    else {
        set_intersection(a[0].begin(), a[0].end(),
                a[1].begin(), a[1].end(),
                inserter(ans, ans.end()));
        REP(i, n) {
            set<int> tmp;
            set_intersection(ans.begin(), ans.end(),
                    a[i].begin(), a[i].end(),
                    inserter(tmp, tmp.end()));
            ans.clear();
            ans = tmp;
        }
        cout << ans.size() << '\n';
    }
    return 0;
}
