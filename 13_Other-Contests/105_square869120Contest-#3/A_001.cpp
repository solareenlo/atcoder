#include <iostream>

int n, k, res, p;
int map[12][6] {
	{ 4,2,0,9,7 },
	{ 1,10,8,6,4 },
	{ 9,7,5,3,1 },
	{ 6,4,2,0,9 },
	{ 3,1,10,8,6 },
	{ 0,9,7,5,3 },
	{ 8,6,4,2,0 },
	{ 5,3,1,10,8 },
	{ 2,0,9,7,5 },
	{ 10,8,6,4,2 },
	{ 7,5,3,1,10 }
};

int main() {
	std::cin >> n >> k;
	n -= 2;
	p = n%11;
	n /= 11;
	res = n*5;
	for(int i=0; i<p; i++) for(int j=0; j<5; j++) if(map[i][j]==k)
		res++;
	std::cout << res << std::endl;
	return 0;
}
