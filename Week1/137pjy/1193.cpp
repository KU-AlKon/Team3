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
		before_sum = sum; // Ʈ������
		sum = i* (i + 1) / 2;
		/*cout <<i <<"��° sum : "<<sum<<"\n";*/
		i++;
	}

	
	m = i - 1;
	
	n = X - before_sum;//before sum�� �־����  
	//cout << m << "��" << n << "��" << "\n";

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