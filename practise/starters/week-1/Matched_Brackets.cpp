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
    int n;
    cin>>n;
    int a[n];
    fr(n){cin>>a[i];}
    int dep=0,max_indx=0,max_len=0,l=0,first_indx;
    stack<int>s;
    

















    // stack<pair<int, int>> s;
    // ll n = 0, x = 0, depth = 0, intdep = 0;
    // cin >> n;

    // fr(n)
    // {
    //     cin >> x;
    //     if (s.top().first == 1)
    //     {
    //         s.push({x, i});
    //         if (s.size() > depth)
    //         {
    //             depth = s.size();
    //         }
    //     }
    //     else
    //     {
    //         s.pop();
    //     }
    // }
    // fr(n)
    // {
    //     cout << s.top().first << " " << s.top().second << endl;
    //     s.pop();
    // }


    return 0;
}
