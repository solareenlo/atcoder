#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<std::string> A, std::vector<std::string> B){
    bool ans = false;
    REP(i, N - M + 1) REP(j, N - M + 1) {
        int count = 0;
        REP(y, M) REP(x, M)
            if (A[i + y][j + x] == B[y][x]) count++;
        if (count == M * M) ans = true;
    }
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    long long M;
    cin >> M;
    std::vector<std::string> A(N);
    for(int i = 0 ; i < N ; i++) std::cin >> A[i];
    std::vector<std::string> B(M);
    for(int i = 0 ; i < M ; i++) std::cin >> B[i];
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
