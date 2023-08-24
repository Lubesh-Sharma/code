#include <stdio.h>

int min_loc(int x[], int k, int size)
{
    int j;
    for (j = k + 1; j < size; j++)
        if (x[j] < x[k] && (x[j] % 2 == x[k] % 2))
            k = j;
    return k;
}

int main()
{
    int a, b,c, i, j,m, temp;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        c=0;
        scanf("%d", &b);
        int Arr[b];
        for (j = 0; j < b; j++)
        {
            scanf("%d", &Arr[j]);
        }
        for (j = 0; j < b-1; j++)
        {
            m = min_loc(Arr, j, b);
            temp = Arr[j];
            Arr[j] = Arr[m];
            Arr[m] = temp;
        }
        for (j = 0; j < b - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                c=1;
                printf("No\n");
                break;
            }
        }
        if(c==0)
        {
            printf("Yes\n");
        }
    }
    return 0;
}