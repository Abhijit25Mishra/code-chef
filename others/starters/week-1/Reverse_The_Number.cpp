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

// int rev(ll n)
// {
//     int len = int(log10(n) + 1);
//     vector<char> v;
//     while (n > 0)
//     {
//         int x = n % 10;
//         n /= 10;
//         v.push_back(x);
//     }
//     for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
//         k = false;
//     if (*ir != 0 && !k)
//     {
//         cout << *ir << " ";
//         k = true;
//     }
//     else if (k)
//     {
//     }
// }

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (true)
        {
            if (n % 10 == 0)
            {
                n /= 10;
            }
            else
            {
                break;
            }
        }
        string s = to_string(n);
        int k = s.length();
        for (int i = k - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
