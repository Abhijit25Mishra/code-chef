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
        if (n == 1)
        {
            cout << "1 0";
            nl;
        }
        else
        {
            ll one = 0, zero = 0;
            fr(n)
            {
                if (s[i] == '0') { zero++; }
                else { one++; }
            }
            ll noOfOpr = max(one, zero) - min(one, zero) + 1;
            ll smallsize = 1;
            if (one == 0 || zero == 0)
            {
                noOfOpr = 0;
                smallsize = s.length();
            }

            if (noOfOpr > 0)
            {
                cout << smallsize << " " << noOfOpr;
                nl;

                while (one != zero)
                {
                    string now = "";
                    ll x = s.size();
                    ll flag = 1;
                    fr(x)
                    {
                        if (s[i] != s[i + 1] && flag)
                        {
                            flag = 0;
                            cout << i + 1 << " " << i + 2 << " ";
                            if (one > zero)
                            {
                                cout << 0;
                                nl;
                                zero++;
                                now += "0";
                            }
                            else
                            {
                                cout << 1;
                                nl;
                                one++;
                                now += "1";
                            }
                            i++;
                        }
                        else
                        {
                            now += s[i];
                        }
                    }
                    s = now;
                    // cout << "abc: " << s;
                    // nl;
                }
                cout << 1 << " " << s.size() << " 0";
            }
            else
            {
                cout << smallsize << " " << noOfOpr;

            }
            nl;


        }
    }
    return 0;
}
