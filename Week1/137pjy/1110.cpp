#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int result=0;
	cin >> n;
	int  N = n; // �Է°� N (Ʈ������2)
	int itr=0;

	while (N != result) {

		itr++;
		/*cout <<itr<<"ȸ\n";*/
		int b = n % 10;
		int d;

		if (n >= 10 && n < 100) {
			d = (n / 10 + b) % 10;
		}
		else {
			d = n % 10;
		}

		result = b * 10 + d;
	/*	cout << result;*/
		
		n=result; //(Ʈ������2)
	}

	if (N == 0) {
		itr = 1;
	} //����� ������ ���� ����ó�� (Ʈ������3)
	cout << itr; 

}