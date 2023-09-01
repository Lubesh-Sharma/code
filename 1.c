# include <stdio.h>
# include <string.h>
char input[50];

int check(char output[],int a)
{
    int i,j,k;
    for(i=0;i<=a;i++)
    {
        k=1;
        for(j=0;j<a;j++)
        {
            if(input[j]!=output[i+j])
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            return 0;
        }
    }
    return 1;
}

int add(char output[],int a,int count1,int count2,int b)
{
    if(count1+count2==2*a)
    {
        if(check(output,a))
        {
            printf("Yes\n%s\n",output);
            return 1;
        }
        else return 0;
    }
    else
    {
        b=b+1;
        if(count1<a)
        {
            output[b]='(';
            count1++;
            if(add(output,a,count1,count2,b)==1)
            {
                return 1;
            }
            count1--;
        }
        if(count2<a)
        {
            output[b]=')';
            count2++;
            if(add(output,a,count1,count2,b)==1)
            {
                return 1;
            }
            else
            {
                output[b]='\0';
                count2--;
            }
        }
    }
    return 0;
}

int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",input);
        a=strlen(input);
        char out[2*a];
        out[0]='(';
        if(add(out,a,1,0,0)!=1)
        {
            printf("No\n");
        }
    }
    return 0;
}
