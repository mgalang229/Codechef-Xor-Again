#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans ^= a[i];
		}
		cout << ans * 2 << '\n';
	}
	return 0;
}
