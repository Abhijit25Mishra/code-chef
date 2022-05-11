#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> seniority;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        seniority.push_back(temp);
    }
    stack<ll> pos;
    ll fear = 1;

    for (ll i = 0; i < n; i++)
    {
        if (pos.size() == 0)
        {
            pos.push(i);
            continue;
        }
        if (seniority[pos.top()] <= seniority[i])
        {
            pos.push(i);
            continue;
        }
        else
        {
            while (pos.size() > 0 && seniority[pos.top()] > seniority[i])
            {
                fear *= ((i - pos.top() + 1) % mod);
                fear = fear % mod;
                pos.pop();
            }
        }
        pos.push(i);
    }
    cout << fear << endl;
}

int main()
{
    fastio;
    solve();
}