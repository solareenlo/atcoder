#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main(void) {
    int N;
    cin >> N;
    vector<P> A(N);
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        cin >> tmp;
        A.at(i).first = i + tmp;
        A.at(i).second = i - tmp;
    }
    rep(i, N)
        cout << A.at(i).first << ' ' << A.at(i).second << endl;
    int count = 0;
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
            if (A.at(i).first == A.at(j).second)
                count++;
    cout << count << endl;
    return 0;
}
