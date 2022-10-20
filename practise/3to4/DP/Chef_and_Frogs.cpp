#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define fr(n) for(long long i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef vector<ll> vi;
#define nl cout << "\n"
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second


// ll get(ll x, vi &parent)
// {
//     return parent[x] = (parent[x] == x) ? x : get(parent[x], parent);
// }
// void uni(ll x, ll y, vi rank, vi &parent)
// {
//     x = get(x, parent);
//     y = get(y, parent);
//     if (rank[x] == rank[y]) { rank[x]++; }
//     if (rank[x] > rank[y]) { parent[y] = x; }
//     else { parent[x] = y; }
// }

int main()
{
    fast;
    ll n, k, p;
    cin >> n >> k >> p;
    // vi A(1e4 + 5, -1);
    // vi Arnk(1e4 + 5, 0);
    vector<pair<ll, ll>> a(n);
    fr(n)
    {
        ll temp1;
        cin >> temp1;
        a[i] = make_pair(temp1, i);
        // A[a[i]] = a[i];
    }

    sort(all(a));

    ll j = 1;
    vector < pair < ll, ll>> setval(n);
    fr(n - 1)
    {
        if (a[i + 1].first - a[i].first <= k) { setval[i] = mp(j, a[i].second); setval[i + 1] = mp(j, a[i].second); }
        else
        {
            setval[i] = mp(j, a[i].second); j++;
            if (i == n - 2) { setval[n - 1] = mp(j, a[n - 1].second); }
        }
    }

    vi fin(n);
    for (auto elem : setval)
    {
        fin[elem.second] = elem.first;
    }
    fr(p)
    {
        ll xx, yy;
        cin >> xx >> yy;

        if (fin[xx - 1] == fin[yy - 1]) { cout << "Yes"; }
        else { cout << "No"; }
        nl;
    }
    // fr(n)
    // {
    //     cout << fin[i];
    // }








    // fr(n - 1)
    // {
    //     if (a[i + 1] - a[i] <= k)
    //     {
    //         uni(a[i], a[i + 1], Arnk, A);
    //     }
    // }
    // fr(p)
    // {
    //     ll x, y;
    //     cin >> x >> y;
    //     if (get(a[x - 1], A) == get(a[y - 1], A)) { cout << "Yes"; }
    //     else { cout << "No"; }
    //     nl;
    // }
    return 0;
}
