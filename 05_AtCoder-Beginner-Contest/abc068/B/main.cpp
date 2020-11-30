#include <iostream>
#include <cmath>
#include <queue>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N){
    queue<int> que;
    REP(i, 7) que.push(pow(2, 6 - i));
    REP(i, 7) if (N < que.front()) que.pop();
    cout << que.front() << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
