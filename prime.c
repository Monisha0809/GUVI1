#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n,flag=0,a[10],j;
scanf("%d",&n);
int i=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
    flag=1;
    break;
}
}
if(flag==0)
printf("prime number");
else
{
    printf("Not a prime number");
}
}
