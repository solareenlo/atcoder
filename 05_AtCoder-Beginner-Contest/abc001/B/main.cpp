#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long m){
    string VV;
    if (m < 100) VV = "00";
    if (m >= 100 && m < 1000) {
        VV += "0";
        VV += to_string(m / 100);
    }
    if (m >= 1000 && m <= 5000) VV = to_string(m / 100);
    if (m >= 6000 && m <= 30000) VV = to_string(m / 1000 + 50);
    if (m >= 35000 && m <= 70000) VV =to_string((m / 1000 - 30) / 5 + 80);
    if (m > 70000) VV = "89";
    print(VV);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long m;
    scanf("%lld",&m);
    solve(m);
    return 0;
}
