#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	
	printf("%d\n",a/100);
	printf("%d\n",(a/10)%10);
	printf("%d\n",a%10);
	
	printf("%d\n",b/100);
	printf("%d\n",(b/10)%10);
	printf("%d",b%10);
	
	return 0;
}
