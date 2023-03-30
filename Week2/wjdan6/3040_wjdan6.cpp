#include <iostream>

using namespace std;

int main()
{
    int a, i, j, sum = 0, ar[100], b, c;
    for (i = 1; i <= 9; i++)
    {
        cin >> a;
        ar[i] = a;
        sum += a;
    }
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i != j && ar[i] + ar[j] == sum - 100)
            {
                b = ar[i];
                c = ar[j];
            }
        }
    }
    for (i = 1; i <= 9; i++)
    {
        if (ar[i] != b && ar[i] != c)
        {
            cout << ar[i] << "\n";
        }

    }
}
