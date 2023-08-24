#include <bits/stdc++.h>
using namespace std;
long long min_operations(int N, vector<int> A)
{
    while (1)
    {
        sort(A.begin(), A.end());
        if (A[1] < 0 || (((-1 * A[0]) > A[1]) && A[1] > 0))
        {
            A[1] *= -1;
            A[0] *= -1;
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<"\t";
    }
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i] * (N - i) * (i + 1);
    }
    return sum;
}

int main()
{
    int n, a, i;
    cin >> n;
    vector<int> A, brr;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    cout << min_operations(n, A);
}