#include <bits/stdc++.h>
using namespace std;

int XOR(int X, int Y)
{
    int result = 0;
    int mask = 1;
    for (int i = 0; i < 32; i++) {
        int bitX = (X & mask) > 0;
        int bitY = (Y & mask) > 0;
        int xorBit = (bitX ^ bitY);
        result |= (xorBit << i);
        mask <<= 1;
    }
    return result;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        // int n;
        // cin>>n;
        int i, j;
        // int X[n];
        // for(i=0;i<n;i++)
        // {
        //     cin>>X[i];
        // }
        for (i = 0; i < 16; i++)
        {
            for (j = 0; j < 16; j++)
            {
                cout << XOR(i, j) << "\t";
            }
            cout << "\n";
        }
    }

    return 0;
}