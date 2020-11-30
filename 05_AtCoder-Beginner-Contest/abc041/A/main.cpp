#include <iostream>
using namespace std;

void solve(std::string s, long long i){
    cout << s[i - 1] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    long long i;
    cin >> i;
    solve(s, i);
    return 0;
}
