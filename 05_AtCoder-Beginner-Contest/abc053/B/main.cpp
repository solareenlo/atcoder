#include <iostream>
using namespace std;

void solve(std::string s){
    int a = 0, z = 0;
    a = s.find_first_of('A');
    z = s.find_last_of('Z');
    cout << z - a + 1<< '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
