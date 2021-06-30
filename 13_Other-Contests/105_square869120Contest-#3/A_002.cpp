#include <iostream>

int main() {
	int n, k; std::cin >> n >> k;
	if (n <= 2) {
		std::cout << 0 << std::endl;
		return 0;
	}
	int res = (n/11-1)*5;
	n = n%11+11;
	for (int i=1; i<=n-2; i++)
		for (int j=2; j<=6; j++)
			if ((i*7+j)*9%11==k)
				res++;
	std::cout << res << std::endl;
	return 0;
}
