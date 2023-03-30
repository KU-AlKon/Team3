#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	int sum = 0;
	int add = 0;
	string s;
	cin >> n;


	for (int j = 0; j < n; j++) {
		cin >> s;
		for (char &v: s) {
			if (v== 'O') {
				add++;
				sum += add;
			}
			else {
				add = 0;
			}

		}
		cout << sum;
		sum = 0;
		add = 0;
	}
}

