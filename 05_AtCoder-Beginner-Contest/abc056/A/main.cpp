#include <iostream>
using namespace std;

void solve(std::string a, std::string b){
    int i, j;
    if (a == "H") i = 1;
    else i = -1;
    if (b == "H") j = 1;
    else j = -1;
    if (i * j == 1) cout << 'H' << '\n';
    else cout << 'D' << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string a;
    std::cin >> a;
    std::string b;
    std::cin >> b;
    solve(a, b);
    return 0;
}
