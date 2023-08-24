#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,k,sum=1;
    cin>>n>>k;
    int i;
    for(i=2;i<=k;i++)
    {
        sum+=2;
        if(n%2==0 && i==(int)(n/2))
        {
            i++;
            break;
        }
        else if(n%2==1 && i==((int)(n/2)+1))
        {
            i++;
            break;
        }
    }
    if(i==k+1)
    {
        cout<<sum<<endl;
        return 0;
    }
    sum=0;
    while(i<=k)
    {
        sum=sum+2;
        i++;
    }
    cout<<sum<<endl;

    return 0;
}