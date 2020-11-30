#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string w){
    map<char, int> alpha;
    REP(i, w.size()) {
        alpha.insert(make_pair(w[i], 0));
        alpha[w[i]]++;
    }

    bool ans = true;
    for (auto itr = alpha.begin(); itr != alpha.end(); itr++)
        if (itr->second % 2) ans = false;

    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string w;
    std::cin >> w;
    solve(w);
    return 0;
}
