#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int* arr = new int[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	//cout << "sum:" << sum<<"\n";

	int diff = sum - 100;
	//cout << "diff:" << diff;
	int p_idx1,p_idx2;
	for (int i = 0; i < 8; i++) {
		for (int j = i+1; j < 9; j++)
		{
			if (diff == arr[i] + arr[j]) {
				p_idx1 = i;
				p_idx2 = j;
				/*cout << p_idx1 <<" "<< p_idx2<<"\n";*/
			}
				
		}
	}



	for (int i = 0; i < 9; i++) {
		if (i == p_idx1 || i == p_idx2)
			continue;
		cout << arr[i]<<"\n";
	}


}