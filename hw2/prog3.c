#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	printf("Input1:");
	scanf("%d",&a);
	printf("Input2:");
	scanf("%d",&b);
	
	printf("Result1:%5.2f\n",(double)9/5*(double)a+32);
	printf("Result2:%5.2f",(double)9/5*(double)b+32); 
	return 0;
}
