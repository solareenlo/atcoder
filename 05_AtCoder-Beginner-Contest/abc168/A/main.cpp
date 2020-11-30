#include <iostream>
#include <map>
using namespace std;

void solve(long long N){
    map<int, string> h;
    h.insert(make_pair(0, "pon"));
    h.insert(make_pair(1, "pon"));
    h.insert(make_pair(2, "hon"));
    h.insert(make_pair(3, "bon"));
    h.insert(make_pair(4, "hon"));
    h.insert(make_pair(5, "hon"));
    h.insert(make_pair(6, "pon"));
    h.insert(make_pair(7, "hon"));
    h.insert(make_pair(8, "pon"));
    h.insert(make_pair(9, "hon"));
    cout << h[N % 10] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
