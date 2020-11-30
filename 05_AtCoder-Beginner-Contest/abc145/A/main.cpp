#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1);

void solve(long long r){
    double area = pow(r, 2) * PI;
    cout << area / PI << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long r;
    scanf("%lld",&r);
    solve(r);
    return 0;
}
