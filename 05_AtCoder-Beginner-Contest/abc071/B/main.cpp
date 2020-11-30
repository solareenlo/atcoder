#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string S){
    set<char> str;
    REP(i, S.size())
        str.insert(S[i]);

    set<char> alpha;
    for (char i = 'a'; i <= 'z'; i++)
        alpha.insert(i);

    set<char> diff;
    std::set_difference(alpha.begin(), alpha.end(),
            str.begin(), str.end(),
            std::inserter(diff, diff.end()));

    if (diff.size() == 0) print("None");
    else {
        auto itr = diff.begin();
        print(*itr);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
