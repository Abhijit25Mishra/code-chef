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

ll mat[1005][1005];
void solve()
{
    for (int i = 1; i < 1005; i++)
    {
        mat[i][1] = i * (i + 1) / 2;
        for (int j = 2; j < 1005; j++)
        {
            mat[i][j] = mat[i][j - 1] + (i - 1) + (j - 1);
        }
    }
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    solve();
    while (t--)
    {
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for (int i = x1; i <= x2; i++)
        {
            sum += mat[i][y1];
        }
        for (int i = y1 + 1; i <= y2; i++)
        {
            sum += mat[x2][i];
        }

        cout << sum << "\n";
    }

    return 0;
}
