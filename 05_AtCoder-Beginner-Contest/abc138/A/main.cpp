#include <iostream>
using namespace std;

void solve(long long a, std::string s){
    if (a >= 3200) cout << s << '\n';
    else cout << "red" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    cin >> a;
    std::string s;
    std::cin >> s;
    solve(a, s);
    return 0;
}
