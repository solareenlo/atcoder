#include <iostream>
using namespace std;

void solve(long long A, std::string op, long long B){
    if (op == "+") cout << A + B << '\n';
    else cout << A - B << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    cin >> A;
    std::string op;
    std::cin >> op;
    long long B;
    cin >> B;
    solve(A, op, B);
    return 0;
}
