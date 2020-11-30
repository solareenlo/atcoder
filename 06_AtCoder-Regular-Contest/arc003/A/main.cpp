#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> gpa;
    REP(i, n)
        gpa[s[i]]++;

    double sum = 0;
    for (auto i : gpa) {
        if (i.first == 'A') sum += 4.0 * i.second;
        if (i.first == 'B') sum += 3.0 * i.second;
        if (i.first == 'C') sum += 2.0 * i.second;
        if (i.first == 'D') sum += 1.0 * i.second;
    }

    printf("%.10f\n", sum / n);
    return 0;
}
