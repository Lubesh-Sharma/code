
#include "bits/stdc++.h"
using namespace std;

#define ll long long int

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define pb push_back
#define sz(a) (int)a.size()
void solve()
{
   int n, sum = 0, sum1 = 0, ans = 0;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      sum += a[i];
   }
   sort(a.begin(), a.end());
   for (int i = n - 1; i >= 0; i--)
   {
      sum -= a[i];
      sum1 += a[i];
      ans++;
      if (sum1 > sum)
      {
         cout << ans << endl;
         return;
      }
   }
}

int32_t main()
{

   solve();
}
