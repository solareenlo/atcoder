#include <iostream>
int n, val, sum, l;
int main() {
	std::cin >> n;
	for (int i = 0; i < 17; i++) {
		if (n & (1 << i)) {
			std::cout << "? " << l << " " << l + (1 << i) << std::endl;
			std::cin >> val;
			sum += val;
			l += 1 << i;
		}
	}
	std::cout << "! " << sum << std::endl;
	return 0;
}
