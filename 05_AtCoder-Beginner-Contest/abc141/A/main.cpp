#include <iostream>
using namespace std;

void solve(std::string S){
    string s = "Sunny";
    string c = "Cloudy";
    string r = "Rainy";
    if (S == s) cout << c << '\n';
    else if (S == c) cout << r << '\n';
    else cout << s << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
