#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool cmp(pair<int, int> p1, pair<int, int>p2) {
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}
	else {
		return p1.first < p2.first;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}


}