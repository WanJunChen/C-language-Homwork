#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[50]={0},b[8],i,count=0,t=0;
    for(i=0;i<50;i++)
    {
        printf("Input:");
        scanf("%d",&a[i]);
		if(a[i]!=0)
            count++;
        else
            break;
    }
    b[0]=a[0];
    b[1]=a[1];
    b[2]=a[2];
    b[3]=a[3];
    b[4]=a[4];
    b[5]=a[5];
    b[6]=a[6];
    b[7]=a[7];
    
    int j,k,s=0;
    for(j=8;j<count;j++)
    {
    	for(k=0;k<8;k++)
    	{
    		if(a[j]==b[k])
    		{
    			while(k<7)
    			{
    		    	b[k]=b[k+1];
    		    	k++;
				}
    			b[7]=a[j];
			}
			else
				t++;
		}
		if(t==8)
		{
			s=0;
			while(s<7)
    		{
    		   	b[s]=b[s+1];
    		   	s++;
			}
    		b[7]=a[j];
		}
		t=0;
	}
    printf("Result:");
    int o,c=0;
    for(o=0;o<=7;o++)
    {
    	c++;
    	if(c>1)
    	    printf(" ");
    	printf("%d",b[o]);
	}
 
 
    return 0;
}
