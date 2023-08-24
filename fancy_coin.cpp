#include "bits/stdc++.h"
using namespace std;

#define ll long long int

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define pb push_back
#define sz(a) (int)a.size()

void solve()
{
    int m, k, a, b;
    cin >> m >> k >> a >> b;
    int ans;
    b -= m / k;
    a -= m % k;
    if (a > 0)
    {
        a /= k;
        b += a;
    }
    if (b >= 0)
        b = 0;
    if (b < 0)
        b *= (-1);

    if (a < 0)
    {
        a *= (-1);
        b += a;
    }
    ans = b;
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}