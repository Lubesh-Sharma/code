//Lubesh Kumar Sharma 22CS30065 q1 ass2
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int function(int n, int m, int current, int A[n])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    if (n == 1)
    {
        return A[0];
    }
    int index = (current + m - 1) % n;
    int count = 0;
    int new[n - 1];
    int i;
    for (i = 0; i < n; i++)
    {
        if (i != index)
        {
            new[count] = A[i];
            count++;
        }
    }
    if(index==n-1)
    {
        index=0;
    }
    return function(n - 1, m, index, new);
}

int main()
{
    int n, m;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);
    int i;
    int array[n];
    for (i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
    printf("%d\n ", function(n,m,0,array));

    return 0;
}