#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

// 便利関数
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long N;
    cin >> N;

    std::vector<std::string> s(N);
    REP(i, N) std::cin >> s[i];

    long long M;
    cin >> M;

    std::vector<std::string> t(M);
    REP(i, M) std::cin >> t[i];

    map<string, ll> ans;
    REP(i, N) ans.insert(make_pair(s[i], 0));
    REP(i, M) ans.insert(make_pair(t[i], 0));
    REP(i, N) ans[s[i]]++;
    REP(i, M) ans[t[i]]--;

    ll maxi = 0;
    for (auto i : ans)
        chmax(maxi, i.second);

    print(maxi);
    return 0;
}
