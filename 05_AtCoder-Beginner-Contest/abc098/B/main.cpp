#include <algorithm>
#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

void solve(long long N, std::string S){
    int ans = -1;
    REP(i, N) {
        string s1 = S.substr(0, i);
        set<char> s1S;
        REP(j, s1.size()) s1S.insert(s1[j]);

        string s2 = S.substr(i);
        set<char> s2S;
        REP(j, s2.size()) s2S.insert(s2[j]);

        set<char> result;
        set_intersection(s1S.begin(), s1S.end(),
                s2S.begin(), s2S.end(),
                inserter(result, result.end()));
        chmax(ans, (int)result.size());
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
