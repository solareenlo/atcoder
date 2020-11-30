#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int days, num;
	cin >> days >> num;
	int l;
	int i = 0;
	int a[num];
	while (i < num) {
		cin >> l;
		a[i] = l;
		i++;
	}
	for (int i = 0; i < num; i++)
		days -= a[i];
	if (days < -1)
		days = -1;
	cout << days << endl;
	return 0;
}
