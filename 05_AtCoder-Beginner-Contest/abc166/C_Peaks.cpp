#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(void) {
    int N, M;
    cin >> N >> M;

    map<int, bool> obser;
    for (int i = 1; i <= N; i++)
        obser[i] = true;

    vector<int> H(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> H.at(i);

    vector<P> route(M);
    for (int i = 0; i < M; i++)
        cin >> route.at(i).first >> route.at(i).second;

    // for (int i = 0; i < M; i++)
    //     cout << route.at(i).first << ' ' << route.at(i).second << endl;

    for (int i = 0; i < M; i++) {
        if (H.at(route.at(i).first) < H.at(route.at(i).second))
            obser.at(route.at(i).first) = false;
        else if  (H.at(route.at(i).first) > H.at(route.at(i).second))
            obser.at(route.at(i).second) = false;
        else {
            obser.at(route.at(i).first) = false;
            obser.at(route.at(i).second) = false;
        }
    }

    int count = 0;
    for (int i = 1; i <= N; i++)
        if (obser.at(i) == true)
            count++;

    cout << count << endl;
    return 0;
}
