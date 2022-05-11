#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;

        cin >> n >> x;
        long long eat = 1, max1 = n - x;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (long long i = 0; i < n; i++)
        {

            if (a[i] != a[i + 1] && (i != n - 1))
            {
                eat++;
            }
            if (i == n - 1 && eat < max1)
            {
                cout << eat << endl;
            }
            else if (i == n - 1)
            {
                cout << max1 << endl;
            }
        }
    }
    return 0;
}