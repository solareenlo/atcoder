// 2つ目の要素でソートする（その1）
#include <iostream>
#include <vector>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int> > vec(n);
    REP(i, n) {
        int a, b;
        cin >> a >> b;
        vec.at(i) = make_pair(b ,a);
    }

    sort(vec.begin(), vec.end());

    REP(i, n) {
        int b, a;
        tie(b, a) = vec.at(i);
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
