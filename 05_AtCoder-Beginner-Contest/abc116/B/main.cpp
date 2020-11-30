#include <iostream>
using namespace std;

void solve(long long s){
    int count = 0;
    if (s == 1) count = 0;
    else if (s == 2) count = 0;
    else {
        while (s != 4) {
            if (s % 2) s = 3 * s + 1;
            else s /= 2;
            count++;
        }
    }
    cout << count + 4 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long s;
    scanf("%lld",&s);
    solve(s);
    return 0;
}
