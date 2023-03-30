#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout<< "*";
		}
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}
		cout << "\n";
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}
		for (int j = 2*i-1; j >=1; j--) {
			cout << "*";
		}
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}
		if (i!= 1) {
			cout << "\n";
		}
	}

}