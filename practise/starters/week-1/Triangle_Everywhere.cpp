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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c)
        {
            cout << 1;
        }
        else if (a == b || b == c || a == c)
        {
            cout << 2;
        }
        else if (a != b && b != c && c != a)
        {
            cout << 3;
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}
