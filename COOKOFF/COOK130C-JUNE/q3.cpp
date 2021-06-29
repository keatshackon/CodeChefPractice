#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, k, l, q;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int>v;
		while (n--) {
			cin >> q;
			v.push_back(q);
		}

		int neg = 0;
		int pos = 0;
		int nut = 0;
		int i = 0;
		while (k--) {
			cin >> q;
			if ((a - v[i]) == 0) {
				nut = 1;
			} else if ((a - v[i]) > 0) {
				pos++;
			} else {
				neg++;
			}
		}
		if (nut == 1) {

		}


	}

}