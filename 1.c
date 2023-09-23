#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int left;
    int right;
    int sum;
};

struct node maxcross(int l, int m, int r, int arr[])
{
    struct node ans;
    int left_sum, right_sum, sum;
    sum = 0;
    left_sum = right_sum = -1 * __INT16_MAX__;
    int i;
    for (i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
        {
            left_sum = sum;
            ans.left = i;
        }
    }
    sum = 0;
    for (i = m + 1; i <= r; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
        {
            right_sum = sum;
            ans.right = i;
        }
    }
    ans.sum = left_sum + right_sum;
    return ans;
}

struct node solve(int leftt, int rightt, int arr[])
{
    struct node ans;
    if (leftt == rightt)
    {
        ans.left = leftt;
        ans.right = rightt;
        ans.sum = arr[leftt];
        return ans;
    }
    struct node lefta, righta, crossa;
    int middle = (leftt + rightt) / 2;
    lefta = solve(leftt, middle, arr);
    righta = solve(middle + 1, rightt, arr);
    if (lefta.sum > righta.sum)
    {
        ans = lefta;
    }
    else
    {
        ans = righta;
    }
    crossa = maxcross(leftt, middle, rightt, arr);
    if (crossa.sum > ans.sum)
    {
        ans = crossa;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    struct node ans;
    ans = solve(0, n - 1, arr);
    printf("left=%d\nright=%d\nsum=%d\n", ans.left, ans.right, ans.sum);
    for (i = ans.left; i <= ans.right; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}