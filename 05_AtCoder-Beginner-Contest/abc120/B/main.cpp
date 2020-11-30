#include <algorithm>
#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

set<int> divisorList(int n) {
    set<int> div;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0){
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

set<int> commonDivList(int a, int b) {
    set<int> aDiv = divisorList(a);
    set<int> bDiv = divisorList(b);
    set<int> res;
    set_intersection(aDiv.begin(), aDiv.end(),
            bDiv.begin(), bDiv.end(),
            inserter(res, res.end()));
    return res;
}

void solve(long long A, long long B, long long K){
    set<int> ans;
    ans = commonDivList(A, B);
    auto itr = ans.end();
    REP(i, K) itr--;
    cout << *itr << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long K;
    scanf("%lld",&K);
    solve(A, B, K);
    return 0;
}
