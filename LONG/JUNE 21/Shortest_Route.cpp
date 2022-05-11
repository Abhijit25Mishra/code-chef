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
        ll N, M;
        cin >> N >> M;
        ll Trainorigin[N], traveller[M];
        fr(N) { cin >> Trainorigin[i]; }
        fr(M) { cin >> traveller[i]; }
        ll res[N];
        map<ll, ll> mp;
        ll close1 = -1;
        ll close2 = -1;

        fr(N)
        {
            if (i == 0)
            {
                mp[i] = 0;
            }
            else if (Trainorigin[i] != 0)
            {
                mp[i] = 0;
            }
            else
            {
                mp[i] = mod;
            }
        }
        fr(N)
        {
            if (Trainorigin[i] == 1)
            {
                close1 = i;
            }
            if (Trainorigin[i] == 0 && close1 != -1)
            {
                mp[i] = min(mp[i], i - close1);
            }
        }

        for (ll i = N - 1; i >= 0; i--)
        {
            if (Trainorigin[i] == 2)
            {
                close2 = i;
            }
            if (Trainorigin[i] == 0 && close2 != -1)
            {
                mp[i] = min(mp[i], close2 - i);
            }
        }

        fr(M)
        {
            ll j = traveller[i] - 1;
            if (mp[j] != mod)
            {
                cout << mp[j] << " ";
            }
            else
                cout << -1 << " ";
        }
        cout << endl;
        // fr(M)
        // {
        //     cout << res[traveller[i] - 1] << " ";
        // }
        // fr(N)
        // {
        //     cout << res[i] << " ";
        // }
        // cout << endl;
        // fr(M){

        //     if(a[b[i]-1]==0){}
        // }
    }
    return 0;
}
