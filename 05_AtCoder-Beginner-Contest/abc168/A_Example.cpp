#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(10);
    s[0] = "pon";
    s[1] = "pon";
    s[2] = "hon";
    s[3] = "bon";
    s[4] = "hon";
    s[5] = "hon";
    s[6] = "pon";
    s[7] = "hon";
    s[8] = "pon";
    s[9] = "hon";
    cout << s[n % 10] << endl;
    return 0;
}
