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

ll solve(ll n, ll m)
{
    // 210: 210 105 70 42 35 30 21 15
    ll ans = 0;
    vector<ll> N, M;
    ll sizen = sqrt(n);
    ll sizem = sqrt(m);
    for (int i = 1; i <= sizen; i++)
    {
        if (n % i == 0)
        {
            N.push_back(n / i);
        }
    }
    for (int i = 1; i <= sizem; i++)
    {
        if (m % i == 0)
        {
            M.push_back(m / i);
        }
    }
    // cout << N.size() << "  " << M.size() << " ";

    // fr(N.size())
    // {
    //     for (int j = 0; j < N.size(); j++)
    //     {
    //         if (i != j)
    //         {
    //             if (N[i] % N[j] == 0)
    //             {
    //                 N[j] = -1;
    //             }
    //         }
    //     }
    // }

    fr(M.size())
    {
        for (int j = 0; j < M.size(); j++)
        {
            if (i != j)
            {
                if (M[i] % M[j] == 0)
                {
                }
            }
        }
    }

    sort(all(N), greater<int>());
    sort(all(M), greater<int>());
    // while (N.back() == -1)
    // {
    //     N.pop_back();
    // }
    while (M.back() == -1)
    {
        M.pop_back();
    }
    // cout << N.size() << "  " << M.size() << " ";
    ll x, y;
    x = N.size();
    y = M.size();

    while (x--)
    {
        if (N.back() < y)
        {
            ans = N.back();
        }
        else
        {
            N.pop_back();
        }
    }

    cout << ans << endl;

    return ans;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}
