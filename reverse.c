#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],temp;
    int i=0;
    scanf("%s",a);
    int j=strlen(a)-1;
    while(i<j)
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
    }
    
    printf("%s",a);
    return 0;
}
