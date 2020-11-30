#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for(int i = 1; i <= n; i++) {
        string tmp = to_string(i);
        if (tmp.size() % 2)
            count++;
    }

    cout << count << '\n';
    return 0;
}
