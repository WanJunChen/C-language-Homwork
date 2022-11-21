#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[10],i,j,temp=0,count=1,c=0;
	for(i=0;i<=9;i++)
	{
		do
		{
	        printf("Integer%d:",i+1);
	        scanf("%d",&a[i]);
		}
		while(a[i]>9||a[i]<0);
	}
	int p;
	for(p=1;p<10;p++)
	{
		for(j=0;j<10-p;j++)
		{
			if(a[j]>a[j+1])
		    {
		    	temp=a[j+1];
		    	a[j+1]=a[j];
		    	a[j]=temp;
			}
		}
	}
	
	int m=0,k;
	for(k=0;k<10;k++)
    {
    	if(a[k]==a[k+1])
    	{
    		count++;
    		if(count>m)
    		    m=count;
		}
		else
		    count=1;
	}
	
	count=1;
	
	printf("Result:");
	int e;
	for(e=0;e<10;e++)
    {
    	if(a[e]==a[e+1])
    	{
    		count++;
    		if(m==count)
    		{
    			c++;
    			if(c>1)
    			    printf(" ");
    		    printf("%d",a[e]);
			}
		}
		else
		    count=1;
	}
	
	
	return 0;
}
