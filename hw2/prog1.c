#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d;
	printf("50 dollar:");
	scanf("%d",&a);
	printf("10 dollar:");
	scanf("%d",&b);
	printf("5 dollar:");
	scanf("%d",&c);
	printf("1 dollar:");
	scanf("%d",&d);
	printf("Total:%d",a*50+b*10+c*5+d*1);
	
	return 0;
}
