#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, k, l, u, v, a, s;
	cin >> t;

	while (t--) {
		cin >> u >> v >> a >> s;

		float res = sqrt((u * u) - 2 * a * s);

		cout << res << "\n";

		if (res > v) {
			cout << "No\n";
		} else {
			cout << "YES\n";
		}
	}
}