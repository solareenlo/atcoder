#include <bits/stdc++.h>
using namespace std;
int c1[26], c2[26], c3[26], a, b;
int main() {
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	int n = s1.size();
	for (char c : s1) c1[c-'A']++;
	for (char c : s2) c2[c-'A']++;
	for (char c : s3) c3[c-'A']++;
	for (int i = 0; i < 26; i++) {
		if (c1[i]+c2[i] < c3[i]) {
			cout << "NO" << '\n';
			return 0;
		}
		a += max(0, c3[i]-c2[i]);//S2で使用しないといけない最低限の文字数
		b += max(0, c3[i]-c1[i]);//S1で使用しないといけない最低限の文字数
	}
	cout << ((a<=n/2 && b<=n/2)?"YES":"NO") << '\n';
	return 0;
}
