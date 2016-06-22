#include <stdio.h>

int main()
{
    int odd,i,n,sum=0,sum1=0;
    for(i=1;i<=15;i++)
    {
    sum=sum+i;
    }
    for(i=15;i<=45;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+i;
        }
    }
    printf("%d\n%d",sum,sum1);
}
