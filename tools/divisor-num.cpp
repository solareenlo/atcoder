// 約数の個数を取得する
#include <iostream>
using namespace std;

template<class T, class U>
inline int divCount(T &num, U divisor) {
    int count = 0;
    while (num % divisor == 0) {
        num /= divisor;
        count++;
    }
    return count;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int num, div;
    cin >> num >> div;

    int tmp = divCount(num, div);
    cout << tmp << '\n';
    return 0;
}
