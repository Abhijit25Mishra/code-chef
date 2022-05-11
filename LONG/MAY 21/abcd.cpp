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

const int N = 4e6 + 5;
int F[N], A[N];

void gen()
{
    for (int i = 0; i < N; i++)
    {
        F[i] = i;
    }
    for (int i = 2; i < N; i++)
    {
        if (F[i] == i)
        {
            F[i] = i - 1;
            for (int j = 2 * i; j < N; j += i)
            {
                F[j] = F[j] / i * (i - 1);
            }
        }
    }
    for (int i = 1; i < N; i++)
    {
        A[i] += i - 1;
        for (int j = 2 * i; j < N; j += i)
        {
            A[j] += (i * ((1 + F[j / i]) / 2));
        }
    }
}

int main()
{
    fast;
    gen();
    ll t = 1;
    scanf("%d", &t);

    while (t--)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", A[4 * k + 1]);
    }
    return 0;
}
