#include <iostream>

int main() {
	int t; std::cin >> t;
	while (t--) {
		int n, d; std::cin >> n >> d;
		if (n % 2 == 0)
			d ^= 127;
		std::cout << d+(n-1)*127 << std::endl;
	}
	return 0;
}
