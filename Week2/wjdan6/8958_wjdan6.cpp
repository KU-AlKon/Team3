#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, n, sum = 0, ar[9999], k = 0, st = 0;
    string str;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> str;
        for (j = 0; j < str.size(); j++)
        {
            if (st == 1 && str[j] == 'O')
            {
                sum += ++k;
            }
            if (st == 0 && str[j] == 'O')
            {
                st = 1;
                sum += ++k;
            }
            if (st == 1 && str[j] == 'X')
            {
                st = 0;
                k = 0;
            }
        }
        ar[i] = sum;
        sum = 0;
        k = 0;
    }
    for (i = 1; i <= n; i++)
        cout << ar[i] << "\n";
}
