#include<stdio.h>
#include<stdlib.h>
void palindrome(int);
int main(void)
{
	int a,b,c;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	printf("Integer3:");
	scanf("%d",&c);
	
	printf("Result1:");
	palindrome(a);
	printf("\n");
	printf("Result2:");
	palindrome(b);
	printf("\n");
	printf("Result3:");
	palindrome(c);
	
	return 0;
}

void palindrome(int n)
{
	if(n/10000==n%10)
	{
	    if((n/1000)%10==(n/10)%10)
	        printf("yes");
        else
        	printf("no");
	}
    else
    	printf("no");
	
	return;
}
