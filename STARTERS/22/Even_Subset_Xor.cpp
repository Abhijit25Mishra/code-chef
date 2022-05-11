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

unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

vector<int> req_arr()
{
    ll n = 10000;
    vector<int> v;

    fr(n)
    {
        if (countSetBits(i) % 2 == 0 && i != 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v = req_arr();
        fr(n)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
