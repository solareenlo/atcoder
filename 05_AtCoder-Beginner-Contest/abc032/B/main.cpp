#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string s, long long k){
    set<string> pass;
    if (s.size() < k) cout << 0 << '\n';
    else if (s.size() == k) cout << 1 << '\n';
    else {
        REP(i, s.size() - k + 1)
            pass.insert(s.substr(i, k));
        cout << pass.size() << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    long long k;
    cin >> k;
    solve(s, k);
    return 0;
}
