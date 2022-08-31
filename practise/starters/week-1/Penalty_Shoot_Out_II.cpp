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
        int n;
        cin >> n;
        int len = 2 * n;
        char s[len];
        fr(len) { cin >> s[i]; }
        bool flag = true;
        int a = 0, b = 0;
        fr(len)
        {
            if (i % 2 == 0) // team a
            {
                if (s[i] == '1')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
            else
            { // team b
                if (s[i] == '1')
                {
                    b++;
                }
                else
                {
                    a++;
                }
            }
            if ((a == n + 1 || b == n + 1) && flag)
            {
                flag = false;
                cout << i + 1 << endl;
            }
            if (i == len - 1 && flag)
            {
                cout << 2 * n << endl;
            }
        }
    }
    return 0;
}
