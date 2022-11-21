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
	
	if(a%3==0&&a%5==0&&a%7!=0)
	printf("Result1:0\n");
	else
	printf("Result1:1\n");
	
	if(b%3==0&&b%5==0&&b%7!=0)
	printf("Result2:0\n");
	else
	printf("Result2:1\n");
	
	if(c%3==0&&c%5==0&&c%7!=0)
	printf("Result3:0");
	else
	printf("Result3:1");
	
	return 0;
}
