#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll winx = 0, wino = 0, n = 0;
        ll xctr = 0, octr = 0, u = 0;
        char a[3][3];
        nesfr(3, 3)
        {
            cin >> a[i][j];
            if (a[i][j] == 'X')
            {
                xctr++;
            }
            else if (a[i][j] == 'O')
            {
                octr++;
            }
            else
            {
                u++;
            }
        }

        fr(3)
        {
            if (a[i][0] == a[i][1] && a[i][2] == a[i][1])
            {
                if (a[i][0] == 'X')
                {
                    winx++;
                }
                else if (a[i][0] == 'O')
                {
                    wino++;
                }
            }
            if (a[0][i] == a[1][i] && a[2][i] == a[1][i])
            {
                if (a[0][i] == 'X')
                    winx++;
                if (a[0][i] == 'O')
                    wino++;
            }
        }
        if (a[0][0] == a[1][1] && a[2][2] == a[1][1])
        {
            if (a[1][1] == 'X')
                winx++;
            else if (a[1][1] == 'O')
                wino++;
        }
        if (a[0][2] == a[1][1] && a[2][0] == a[1][1])
        {
            if (a[1][1] == 'X')
                winx++;
            else if (a[1][1] == 'O')
                wino++;
        }

        if (octr > xctr)
        {
            cout << 3 << endl;
        }
        else if ((xctr - octr) > 1)
        {
            cout << 3 << endl;
        }
        else if ((xctr > octr) && winx == 1 && wino == 0)
        {
            cout << 1 << endl;
        }
        else if ((xctr == octr) && winx == 0 && wino == 1)
        {
            cout << 1 << endl;
        }
        else if (u == 0 && (winx + wino == 0))
        {
            cout << 1 << endl;
        }
        else if (u == 0 && (winx + wino == 0))
        {
            cout << 1 << endl;
        }
        else if (u == 0 && winx == 2)
        {
            cout << 1 << endl;
        }
        else if (u > 0 && (winx + wino == 0))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }

        // if (a[0][0] == a[0][1] && a[0][1] == a[0][2])
        // {
        //     k++;
        // }
        // if (a[1][0] == a[1][1] && a[1][1] == a[1][2])
        // {
        //     k++;
        // }
        // if (a[2][0] == a[2][1] && a[2][1] == a[2][2])
        // {
        //     k++;
        // }
        // if (a[0][0] == a[1][0] && a[1][0] == a[2][0])
        // {
        //     k++;
        // }
        // if (a[0][])
    }
    return 0;
}
