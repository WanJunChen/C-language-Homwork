#include<stdio.h>
#include<stdlib.h>
int function(int);
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

int function(int n)
{
	int i,count=0,s=0,i1=0,c=0;
	for(i=2;i<=n;i++)
	{
	    while(n+1!=i)
	        {
	    	    if(n%i==0)
	    	    {
	    	        n=n/i;
    	    	    if(i!=s)
    	    	    {
    	    	    	if(i>i1)
    	    	    	{
						    if(i1!=0)
    	    	    	        printf(" ");
						}
    	    	    	
    				    printf("%d",i);
    	    	    	count++;
    	    	    	c+=count;
				    	if(c==1)
    			        	i1=i;
	    			}
        			else
        			{
        	    	    count++;
        	    	    c+=count;
    					if(c==1)
    						i1=i;
					}
    			    s=i;
    			}
    	    	else
    	    	    break;
				
    		}
    		if(count!=0)
    	    	printf(" %d",count);
			count=0;
	}
	    
	    
	    return 0;
}
