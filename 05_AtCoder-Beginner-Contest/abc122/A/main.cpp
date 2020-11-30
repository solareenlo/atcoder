#include <iostream>
using namespace std;

void solve(std::string b){
    if (b == "A") cout << "T" << '\n';
    else if (b == "T") cout << "A" << '\n';
    else if (b == "C") cout << "G" << '\n';
    else if (b == "G") cout << "C" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string b;
    std::cin >> b;
    solve(b);
    return 0;
}
