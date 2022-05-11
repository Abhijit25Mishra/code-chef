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

void solve()
{
    ll n, q;
    cin >> n >> q;

    vi arr(n);
    ll bit[32] = {0};
    fr(n)
    {
        cin >> arr[i];
        for (int j = 0; j <= 31; j++)
        {
            if ((1 << j) & arr[i])
                bit[j]++;
        }
    }

    ll ans = 0;
    fr(32)
    {
        if (bit[i])
        {
            ans += (1 << i);
        }
    }

    cout << ans << endl;
    while (q--)
    {
        ans = 0;
        int pos, value;
        cin >> pos >> value;

        for (int j = 0; j <= 31; j++)
        {
            if ((1 << j) & arr[pos - 1])
            {
                bit[j]--;
            }
        }
        for (int j = 0; j <= 31; j++)
        {
            if ((1 << j) & value)
            {
                bit[j]++;
            }
        }
        arr[pos - 1] = value;
        for (int i = 0; i < 32; i++)
        {
            if (bit[i])
            {
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
