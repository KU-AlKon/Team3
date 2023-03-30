#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int result=0;
	cin >> n;
	int  N = n; // 입력값 N (트러블슈팅2)
	int itr=0;

	while (N != result) {

		itr++;
		/*cout <<itr<<"회\n";*/
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
		
		n=result; //(트러블슈팅2)
	}

	if (N == 0) {
		itr = 1;
	} //입출력 예제를 통한 예외처리 (트러블슈팅3)
	cout << itr; 

}