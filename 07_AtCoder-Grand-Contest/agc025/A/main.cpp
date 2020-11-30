#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

void solve(long long N){
    int mini = INF;
    if (N == 2) mini = min(mini, 2);
    if (N == 3) mini = min(mini, 3);
    for (int i = 2; i <= N - 2; i++) {
        string strA = to_string(i);
        string strB = to_string(N - i);
        int sum = 0;
        REP(j, strA.size())
            sum += strA[j] - '0';
        REP(j, strB.size())
            sum += strB[j] - '0';
        mini = min(mini, sum);
    }
    cout << mini << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
