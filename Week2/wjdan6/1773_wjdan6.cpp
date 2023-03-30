#include <iostream>
using namespace std;
int ar[2000000];
int main()
{
    int i, j, n, c, a, t = 0;
    fill_n(ar, 2000000, 0);
    cin >> n >> c;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        for (j = a; j <= c; j += a)
        {
            if (ar[j] == 0)
            {
                ar[j] = 1;
                t++;
            }
        }
    }
    cout << t;
}
