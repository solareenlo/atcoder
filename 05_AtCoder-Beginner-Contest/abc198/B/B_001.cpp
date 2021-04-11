#include <bits/stdc++.h>
using namespace std;

int main() {
	string n; cin >> n;
	int cnt = 0;
	for (int i=(int)n.size()-1; i>=0; i--)
		if (n[i] == '0')
			cnt++;
		else
			break ;
	for (int i=0; i<cnt; i++)
		n.insert(0, "0");
	string m = n;
	reverse(m.begin(), m.end());
	cout << ((n==m)?"Yes":"No") << '\n';
    return 0;
}
