#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n, m, k;
    int i, j, l, a, b, c, d;
    cin >> n >> m >> k;
    int diff, mindiff;
    int array[n][m];
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            array[i][j] = 0;
        }
    }
    for (i = 0; i < k; i++)
    {
        cin >> a >> b;
        a = a - 1;
        b = b - 1;
        if (array[a][b] == 0)
        {
            array[a][b] = 1;
            cout << a + 1 << " " << b + 1 << endl;
        }
        else
        {
            mindiff = 20000;
            l = j = 0;
            while (j < n)
            {
                if (array[j][l] == 0)
                {
                    diff = abs(j - a) + abs(l - b);
                    if (mindiff > diff || ((mindiff == diff) && (c > j)))
                    {
                        mindiff = diff;
                        c = j;
                        d = l;
                    }
                    else if ((mindiff == diff) && (c == j) && (d > l))
                    {
                        d = l;
                    }
                }
                if (l == m - 1)
                {
                    j++;
                    l = 0;
                }
                else
                    l++;
            }

            array[c][d] = 1;
            cout << c + 1 << " " << d + 1 << endl;
        }
    }
    return 0;
}