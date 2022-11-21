#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1*/
	int ii1,i1,n1;
	printf("Test1\n");
	printf("i:");
	scanf("%d",&ii1);
	printf("n:");
	scanf("%d",&n1);
	int x1[20];
	for(i1=1;i1<=n1;i1++)
	{
		printf("Integer%d:",i1);
		scanf("%d",&x1[i1-1]);
	}
	/*2*/
	int ii2,i2,n2;
	printf("Test2\n");
	printf("i:");
	scanf("%d",&ii2);
	printf("n:");
	scanf("%d",&n2);
	int x2[20];
	for(i2=1;i2<=n2;i2++)
	{
		printf("Integer%d:",i2);
		scanf("%d",&x2[i2-1]);
	}
	
	/*1*/ 
	int g1,j1,t1;
	
	for(g1=1;g1<=n1-1;g1++)
	{
	    for(j1=0;j1<n1-g1;j1++)
	    {
		    if(x1[j1]>x1[j1+1])
	        {
			    t1=x1[j1+1];
			    x1[j1+1]=x1[j1];
			    x1[j1]=t1;
			}
		}	
	}
	printf("Result1:%d\n",x1[ii1-1]);
		
	/*2*/ 
	int g2,j2,t2;
	
	for(g2=1;g2<=n2-1;g2++)
	{
	    for(j2=0;j2<n2-g2;j2++)
	    {
		    if(x2[j2]>x2[j2+1])
	        {
			    t2=x2[j2+1];
			    x2[j2+1]=x2[j2];
			    x2[j2]=t2;
			}
		}
	}
		
	printf("Result2:%d",x2[ii2-1]);
	
	
	return 0;
}
