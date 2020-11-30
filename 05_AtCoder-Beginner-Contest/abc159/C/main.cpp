#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l; cin >> l;
    double n = l / 3.0;
    printf("%.6f\n", pow(n, 3));
    return 0;
}
