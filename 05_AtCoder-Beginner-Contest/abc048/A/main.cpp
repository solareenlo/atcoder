#include <iostream>
using namespace std;

void solve(std::string AtCoder, std::string s, std::string Contest){
    cout << AtCoder[0] << s[0] << Contest[0] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string AtCoder;
    std::cin >> AtCoder;
    std::string s;
    std::cin >> s;
    std::string Contest;
    std::cin >> Contest;
    solve(AtCoder, s, Contest);
    return 0;
}
