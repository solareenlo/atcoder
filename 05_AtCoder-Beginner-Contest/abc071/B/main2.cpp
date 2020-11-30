#include <algorithm>
#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> a;
    for (char i = 'a'; i <= 'z'; i++)
        a.insert(i);

    set<char> b;
    REP(i, s.size())
        b.insert(s[i]);

    set<char> diff;
    set_difference(a.begin(), a.end(),
            b.begin(), b.end(),
            inserter(diff, diff.end()));

    if (diff.size()) {
        auto itr = diff.begin();
        cout << *itr << '\n';
    } else
        cout << "None" << '\n';
    return 0;
}
