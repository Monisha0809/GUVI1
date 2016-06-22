#include<stdio.h>
void bin(unsigned int n)
{
     unsigned int m=32768;
     while(m>0)
     {
         if((n & m)==0)
         printf("0");
         else
         printf("1");
         m=m>>1;
     }
}
int main()
{
     unsigned int n;
     scanf("%u",&n);
     bin(n);
     return 0;
}
