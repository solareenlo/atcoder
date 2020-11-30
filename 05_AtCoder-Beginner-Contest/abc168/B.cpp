#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k;
    string s;
    cin >> k >> s;
    if (s.size() <= k)
        cout << s << '\n';
    else
        cout << s.substr(0, k) << "..." << '\n';
    return 0;
}
