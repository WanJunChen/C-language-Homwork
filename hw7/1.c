#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[5],com,i,count=0,num;
	for(i=0;i<5;i++)
	{
	    printf("Input%d:",i+1);
	    scanf("%d",&a[i]);
	}
	printf("Compare:");
	scanf("%d",&com);
	
	printf("Result1:");
	for(i=0;i<=4;i++)
	{
		if(a[i]<com&&a[i]%2==0)
		{
			count++;
			if(count>1)
			    printf(" ");
		    printf("%d",a[i]);
		}
	}
    count=0;
	printf("\nResult2:");
	int min,b[5];
	for(i=0;i<=4;i++)
	{
    	num=com-a[i];
    	if(num<0)
    	    num*=-1;
    	b[i]=num;
	}
	min=b[0];
	for(i=1;i<=4;i++)
	{
		if(min>b[i])
		    min=b[i];
	}
	for(i=0;i<=4;i++)
	{
		if(min==b[i])
		{
		    count++;
			if(count>1)
			    printf(" ");
		    printf("%d",a[i]);
		}
	}


	
	return 0;
}
