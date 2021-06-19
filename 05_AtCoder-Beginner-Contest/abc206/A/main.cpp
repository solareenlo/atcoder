#include <iostream>

int main() {
    double n; std::cin >> n;
    int m = n * 1.08;
    if (m == 206)
        std::cout << "so-so" << std::endl;
    else if (m < 206)
        std::cout << "Yay!" << std::endl;
    else
        std::cout << ":(" << std::endl;
    return 0;
}
