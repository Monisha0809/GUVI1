#include<stdio.h>
int main(){
    int k=2,r;
    long int i=0l,j=1,f;
    scanf("%d",&r);

    printf("Fibonacci series is: %ld %ld",i,j);

    while(k<r){
         f=i+j;
         i=j;
         j=f;
         printf(" %ld",j);
          k++;
    }
  
    return 0;
}
