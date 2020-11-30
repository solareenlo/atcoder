#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
#define Would
#define you
#define like
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool compare_by_second(P a, P b) {
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(void) {
    int N;
    cin >> N;
    vector<P> ab(N);
    REP(i, N)
        cin >> ab.at(i).first >> ab.at(i).second;
    sort(ALL(ab), compare_by_second);
    REP(i, N)
        cout << ab.at(i).first << ' ' << ab.at(i).second << endl;
    Would you like return 0;
}
