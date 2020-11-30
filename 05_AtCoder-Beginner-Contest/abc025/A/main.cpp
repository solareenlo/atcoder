#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S, long long N){
    vector<char> vec(S.size());
    REP(i, S.size()) vec[i] = S[i];

    long long count = 1;
    REP(i, vec.size()) {
        REP(j, vec.size()) {
            if (count == N) cout << vec[i] << vec[j] << '\n';
            count++;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    long long N;
    cin >> N;
    solve(S, N);
    return 0;
}
