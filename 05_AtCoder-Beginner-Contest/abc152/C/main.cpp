#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int mini = 300000;
    int count = 0;
    REP(i, n) {
        int tmp; cin >> tmp;
        if (tmp < mini) {
            mini = tmp;
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
