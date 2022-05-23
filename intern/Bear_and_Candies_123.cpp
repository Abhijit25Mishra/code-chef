// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    // preparing testcases
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        // taking in input
        ll A_Max_Can = 0, B_Max_Can = 0;
        cin >> A_Max_Can >> B_Max_Can;

        // solution
        ll i = 1;
        while (A_Max_Can >= 0 && B_Max_Can >= 0)
        {
            A_Max_Can -= i;
            i++;
            B_Max_Can -= i;
            i++;
        }

        if (A_Max_Can < 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Limak" << endl;
        }
    }
    return 0;
}
