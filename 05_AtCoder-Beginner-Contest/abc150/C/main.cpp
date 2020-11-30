#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);

    vector<int> p;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        p.push_back(tmp);
    }

    vector<int> q;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        q.push_back(tmp);
    }

    bool a = false;
    int countP = 0;
    bool b = false;
    int countQ = 0;
    int count = 0;
    while (a == false || b == false) {
        if (v == p) {
            a = true;
            countP = count;
        }
        if (v == q) {
            b = true;
            countQ = count;
        }
        next_permutation(v.begin(), v.end());
        count++;
    }

    cout << abs(countP - countQ) << '\n';
    return 0;
}
