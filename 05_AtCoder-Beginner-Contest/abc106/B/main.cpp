#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(int N){
    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        int count2 = 0;
        for (int j = 1; j <= N; j++) {
            if (i % j == 0) count2++;
        }
        if (count2 == 8) count++;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    solve(N);
    return 0;
}
