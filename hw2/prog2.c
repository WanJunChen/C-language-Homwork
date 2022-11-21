#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	printf("Integer3:");
	scanf("%d",&c);
	
	if(a%2!=0)
	{
		printf("%d is odd\n",a);
	}
	else
	{
		printf("%d is even\n",a);
	}
	if(b%2!=0)
	{
		printf("%d is odd\n",b);
	}
	else
	{
		printf("%d is even\n",b);
	}
	if(c%2!=0)
	{
		printf("%d is odd\n",c);
	}
	else
	{
		printf("%d is even\n",c);
	}
	
	return 0;
}
