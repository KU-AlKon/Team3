#include <bits/stdc++.h>
using namespace std;
bool fire[2000001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N,C;
	cin >> N>>C;
	

	for (int i = 0; i < N; i++) {//N번 입력을 받음
		int multiple;
		cin >> multiple;
		for (int j = multiple; j <= C; j += multiple) {//(트러블 슈팅2)
			if(!fire[j])
				fire[j]= true;
		}
	}

	int cnt = 0;
	for (int k = 1; k <= C; k++) {
		if (fire[k])
			cnt++;
	}

	cout << cnt;

}