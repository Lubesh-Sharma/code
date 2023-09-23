#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int cal_time(char s1[], char s2[])
{
    int time = ((int)(s2[8] - s1[8]) * 10 + (int)(s2[9] - s1[9])) * 24 + (int)(s2[11] - s1[11]) * 10 + (int)(s2[12] - s1[12]);
    return time;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char s1[17], s2[17];
    scanf("%s %s", s1, s2);
    printf("%s\n%s\n", s1, s2);
    int time = cal_time(s1, s2);
    printf("time = %d\n", time);
    int hour = (int)(s1[11] - '0') + (int)(s1[12] - '0');
    printf("hour = %d\n", hour);
    int w, j;
    scanf("%d %d", &w, &j);
    int count = 0;
    while (1)
    {
        if (time == 0)
        {
            break;
        }
        if (time > 0 && ((hour + w) % 24) != 0)
        {
            if (count == 1)
            {
                printf("no\n");
                break;
            }
            time = time - w;
            // printf("time = %d\n", time);
            hour = (hour + w) % 24;
            // printf("hour = %d\n", hour);
            printf("w\n");
        }
        else
        {
            if (time < 0)
            {
                count = 1;
            }
            time = time + j;
            // printf("time = %d\n", time);
            hour = (hour - j + 24) % 24;
            // printf("hour = %d\n", hour);
            printf("a\n");
        }
    }
    return 0;
}