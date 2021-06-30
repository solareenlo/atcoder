#include <iostream>
int n, k, m, res;
int main() {
	std::cin >> n >> k;
	m = (n-2)/11;
	n = (n-2)%11;
	for (int i=1; i<=n; i++)
		for (int j=2; j<=6; j++)
			if ((i*63+j*9)%11==k)
				res++;
	std::cout << res+m*5 << std::endl;
}
