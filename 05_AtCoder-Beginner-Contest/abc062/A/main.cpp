#include <iostream>
#include <map>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long x, long long y){
    map<int, char> g;
    g.insert(make_pair(1, 'A'));
    g.insert(make_pair(3, 'A'));
    g.insert(make_pair(5, 'A'));
    g.insert(make_pair(7, 'A'));
    g.insert(make_pair(8, 'A'));
    g.insert(make_pair(10, 'A'));
    g.insert(make_pair(12, 'A'));
    g.insert(make_pair(4, 'B'));
    g.insert(make_pair(6, 'B'));
    g.insert(make_pair(9, 'B'));
    g.insert(make_pair(11, 'B'));
    g.insert(make_pair(2, 'C'));
    if (g[x] == g[y]) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x;
    scanf("%lld",&x);
    long long y;
    scanf("%lld",&y);
    solve(x, y);
    return 0;
}
