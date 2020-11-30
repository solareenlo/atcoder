#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, std::string S){
    bool ans = true;
    if (N % 2 == 0) ans = false;
    else if (S[N / 2] != 'b') ans = false;
    else {
        int center = N / 2;
        REP(i, N / 2) {
            if (i == 0) continue ;
            if (S[center - i] == 'a' && S[center + i] == 'c') continue ;
            if (S[center - i] == 'c' && S[center + i] == 'a') continue ;
            if (S[center - i] == 'b' && S[center + i] == 'b') continue ;
            ans = false;
        }
    }
    if (ans) print(N / 2);
    else print(-1);
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
