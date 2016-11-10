#include <stdio.h>
#include <string.h>
int main(void) {
	
	char a[100];
	char b[100];
	int t=0;
	int i;
	scanf("%s",a);
	scanf("%s",b);
	int l=strlen(a);
	int k=strlen(b);
	
	if(l!=k)
	{
		printf("Strings are not same");
	}
	else
	{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		t=1;
		else
		t=0;
	}
	if(t==1)
	printf("Strings are same");
	else
	printf("Strings are not same");
	}
	return 0;
}
