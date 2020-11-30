// 2つ目の要素でソートする（その2）
#include <iostream>
#include <vector>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(vec) (vec).begin(), (vec).end()
using P = pair<int, int>;

inline bool compareBySecond(P &a, P &b) {
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<P> vec(n);
    REP(i, n) {
        int a, b;
        cin >> a >> b;
        vec.at(i) = make_pair(a, b);
    }

    sort(ALL(vec), compareBySecond);

    REP(i, n) {
        int a, b;
        tie(a, b) = vec.at(i);
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
