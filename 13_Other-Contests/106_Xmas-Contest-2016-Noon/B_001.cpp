#include <iostream>

int main() {
	for (int i = 1; i < 4096; i++) {
		int l = __builtin_ctz(i);
		std::cout << i << " " << l << std::endl;
	}
}
