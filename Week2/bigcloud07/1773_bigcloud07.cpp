#include <iostream>
#include <vector>

using namespace std;

int main(void){

    int count = 0;
    int n, c = 0;
    vector<int> v;

    cin >> n >> c;

    for (int i = 0; i<n;i++){
        int a;
        cin >> a;
        v.push_back(a); // 배열의 맨뒤에 원소 삽입

    }

    for (int i = 1; i <= c; i++)
    {

        for(int j=0; j<n; j++)
        {
            if(i % v[j]==0)
            {
                count++;
                break;
            }
        }
    }

    cout << count << '\n';
    return 0;

}
