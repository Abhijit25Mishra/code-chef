// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll p = 0, m = 0;
        map<ll, ll> freq;
        fr(n)
        {
            if (s[i] == '+') { p++; }
            else if (s[i] == '-') { m++; }
            else
            {
                freq[s[i] - 48]++;
            }
        }
        if (p == 0 && m == 0)
        {
            sort(all(s), greater<ll>());
            cout << s;
            nl;
        }
        else
        {
            string digits = "";
            for (int i = 9; i >= 0; i--)
            {
                while (freq[i] != 0)
                {
                    char k = i + 48;
                    digits += k;
                    freq[i]--;
                }
            }

            string ans = "";
            ll k = p + m;
            bool ok = true;
            ans += digits.substr(0, digits.length() - k);
            ll z = digits.length() - k;
            k = z - 1;
            while (p != 0)
            {
                ans += '+';
                p--;
                k++;
                ans += digits.substr(k, 1);

            }
            while (m != 0)
            {
                ans += '-';
                m--;
                k++;
                ans += digits.substr(k, 1);
            }
            cout << ans;
            nl;
        }
    }
    return 0;
}
