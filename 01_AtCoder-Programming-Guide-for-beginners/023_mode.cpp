#include "bits/stdc++.h"
#define Would
#define you
#define like
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool sort_by_value(const P &a, const P &b) {
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(void) {
    int N;
    cin >> N;

    map<int, int> A;
    REP(i, N) {
        int tmp;
        cin >> tmp;
        A[tmp]++;
    }

    // for (auto itr = A.begin(); itr != A.end(); ++itr)
    //     cout << itr->first << ' ' << itr->second << endl;

    vector<P> vec;
    for (auto itr = A.begin(); itr != A.end(); ++itr)
        vec.push_back(make_pair(itr->first, itr->second));

    sort(ALL(vec), sort_by_value);

    // for (int i = 0; i < vec.size(); i++)
    //     cout << vec[i].first << ' ' << vec[i].second << endl;
    cout << vec[vec.size() - 1].first << ' ' << vec[vec.size() - 1].second << endl;
    Would you like return 0;
}
