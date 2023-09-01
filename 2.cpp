#include "bits/stdc++.h"
using namespace std;

#define ll long long int

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define pb push_back
#define sz(a) (int)a.size()
map<ll, ll> m;
int gfa(ll x)
{
    // int n=1;
    for (ll i = x - 1; i >= 1; i--)
    {

        if (x % i == 0 && m[i] < 2 && !(i == 3 && m[1] >= 1))
        {
            m[i]++;
            return (i);
        }
    }
    if (m[1] < 2)
        m[1]++;
    return 1;
}
void solve()
{
    ll x;
    cin >> x;
    vector<ll> a;
    while (x >= 1)
    {
        cout << "*";
        if (x == 3)
            cout << "r";
        a.push_back(x);
        ll n = gfa(x);
        x -= n;
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}
