#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int X;
	cin >> X;
	int sum = 0;
	int a = 0;
	int b = 0;
	int i = 1;
	int m=1;
	int n;
	int before_sum;
	
	while (sum < X) {
		before_sum = sum; // 트러블슈팅
		sum = i* (i + 1) / 2;
		/*cout <<i <<"번째 sum : "<<sum<<"\n";*/
		i++;
	}

	
	m = i - 1;
	
	n = X - before_sum;//before sum을 넣어야함  
	//cout << m << "군" << n << "항" << "\n";

	if (m % 2 == 0) {
		a = n;
		b = m - n + 1;
	}
	else {
		b = n;
		a = m - n + 1;
	}

	cout << a<< "/" << b;
}