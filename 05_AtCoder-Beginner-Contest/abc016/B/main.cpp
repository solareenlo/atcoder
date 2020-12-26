#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
    if (a + b == c && a - b == c) printf("?\n");
    else if (a + b != c && a - b != c) printf("!\n");
    else if (a + b == c) printf("+\n");
    else printf("-\n");
	return 0;
}
