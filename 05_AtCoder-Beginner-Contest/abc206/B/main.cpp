#include <iostream>

int main() {
    int n; std::cin >> n;
    int cnt = 0;
    int sum = 0;
    while (sum < n)
        sum += cnt++;
    std::cout << --cnt << std::endl;
    return 0;
}
