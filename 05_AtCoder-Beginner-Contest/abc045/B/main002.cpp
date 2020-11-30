#include <iostream>
#include <map>
#include <queue>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    map<char, queue<char>> s;
    REP(i, sa.size()) s['a'].push(sa[i]);
    REP(i, sb.size()) s['b'].push(sb[i]);
    REP(i, sc.size()) s['c'].push(sc[i]);

    char next = 'a', prev = 'a';
    while (true) {
        if (s[next].size() == 0) {
            cout << (char)toupper(next) << '\n';
            return 0;
        }
        prev = next;
        next = s[next].front();
        s[prev].pop();
    }
    return 0;
}
