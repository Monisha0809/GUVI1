#include <stdio.h>
int main()
{
int n,rem,num=0;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    num=num*10+rem;
    n=n/10;
}
printf("%d",num);
return 0;
}


