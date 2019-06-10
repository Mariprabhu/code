// You are using GCC
#include<stdio.h>
int main()
{
    long long int n,i,count,j;
    scanf("%lld",&n);
    if(n%2==0)
    {
    while(n%2==0)
    {
        count++;
        n=n/2;
    }
    printf("2->%d\n",count);
    }
    for(i=3;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            count=0;
        if(i%j!=0)
        {
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            if(count>0)
            {
            printf("%d->%d\n",i,count);
            }
        }
        }
    }
}
