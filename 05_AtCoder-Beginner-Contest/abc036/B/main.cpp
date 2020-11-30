#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<std::string> s){
    vector<vector<char> > mat(N, vector<char>(N));
    REP(i, N) REP(j, N)
        mat[j][N - 1 - i] = s[i][j];
    REP(i, N) {
        REP(j, N)
            cout << mat[i][j];
        cout << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::vector<std::string> s(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
    }
    solve(N, std::move(s));
    return 0;
}
