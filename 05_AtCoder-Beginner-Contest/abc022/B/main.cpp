#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    int ans = 0;
    map<int, bool> flower;
    REP(i, N) {
        int tmp; cin >> tmp;
        if (flower[tmp]) ans++;
        flower[tmp] = true;
    }
    print(ans);
    return 0;
}
