#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

void solve(long long N, std::string S){
    int p = 0, m = 0;
    int maxi = -10000;
    int num = 0;
    REP(i, S.size()) {
        if (S[i] == 'I') {
            num++;
            chmax(maxi, num);
        }
        else num--;
    }
    if (maxi >= 0) cout << maxi << '\n';
    else cout << 0 << '\n';
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
