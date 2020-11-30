#include <iostream>
#include <algorithm>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string S, long long N, std::vector<long long> l, std::vector<long long> r){
    REP(i, N) {
        int num = r[i] - l[i] + 1;
        string tmp = S.substr(l[i], num);
        reverse(tmp.begin(), tmp.end());
        S.replace(l[i], num, tmp);
    }
    print(S);
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    long long N;
    scanf("%lld",&N);
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    for(int i = 0 ; i < N ; i++){
        ll tmp;
        cin >> tmp;
        l[i] = tmp - 1;
        cin >> tmp;
        r[i] = tmp - 1;
    }
    solve(S, N, std::move(l), std::move(r));
    return 0;
}
