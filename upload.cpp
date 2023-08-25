#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int A[n], B[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }
    int count = 1;
    int maxcount = 0;
    for (i = 0; i < n - 1; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (A[i] == A[j] && B[i] == B[j])
            {
                count++;
            }
            else
            {
                if (maxcount < count)
                {
                    maxcount = count;
                }
                break;
            }
        }

        if (maxcount < count)
        {
            maxcount = count;
        }
    }
    cout << maxcount;
    return 0;
}