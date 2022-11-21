#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char ch[1000000],check[1000][11];
	int i=0,j=0,x=0,y=0,time[10]={0};
	
	printf("Input:");
	gets(ch);
	
	while(ch[i]!='\0')
	{
		while(ch[i]!='\0'&&ch[i]!=' ')
		{
			check[j][x]=ch[i];
			i++;
			x++;
		}
		j++;
		i++;
		x=0;
	}
	
	int num[j];
	int a,b;
	for(a=0;a<j;a++)
	{
		for(b=0;b<=10;b++)
		{
			if(check[a][b]!='\0')
			{
				y++;
			}
		}
		time[y-1]++;
		num[a]=y;
		y=0;
	}
	
	int count=0;
	
	for(a=0;a<10;a++)
	{
		printf("%dWord %d",a+1,time[a]);
		if(time[a]!=0)
		{
			printf(" (");
			for(b=0;b<j;b++)
			{
				if(num[b]==a+1&&count==0)
				{
					printf("%s",check[b]);
					count++;
				}
				else if(num[b]==a+1&&count!=0)
				{
					printf(",%s",check[b]);
				}
			}
			printf(")");
		}
		count=0;
		if(a<9)
		    printf("\n");
	}
	
	
	return 0;
}
