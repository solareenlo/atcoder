#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(void) {
    int N, K;
    cin >> N >> K;
    map<int, bool> person;

    for (int i = 0; i < N; i++)
        person[i] = false;

    vector<int> d(K);
    for (int i = 0; i < K; i++) {
        cin >> d.at(i);
        for (int j = 0; j < d.at(i); j++) {
            int num = 0;
            cin >> num;
            person.at(num - 1) = true;
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++)
        if (person.at(i) == false)
            count++;
    cout << count << endl;
    return 0;
}
