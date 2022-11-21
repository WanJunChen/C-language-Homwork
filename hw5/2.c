#include<stdio.h>
#include<stdlib.h>
void function(int);
int main(void)
{
	int a,b;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	printf("Result1:");
	function(a);
	printf("\n");
	printf("Result2:");
	function(b);
	
	return 0;
}
void function(int n)
{
	int s,j;
	printf("%d",n);
	while(s!=j)
	{
		s=n;
	    n=((n*n)/10)%100;
    	printf(" %d",n);
    	j=n;
	}
	
	
	return;
}
