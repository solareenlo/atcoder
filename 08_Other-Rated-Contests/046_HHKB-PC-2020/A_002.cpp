#include <bits/stdc++.h>
int main() {
	char s, t; std::cin >> s >> t;
	if (s == 'Y') t -= 'a' - 'A';
	printf("%c\n", t);
	return 0;
}
