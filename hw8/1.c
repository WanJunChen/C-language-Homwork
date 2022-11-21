#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void)
{
	char a[100],b[50][11],word[50][11];
	int i,j=0,k=0,count=0,q,w;
	int x=0;
	
	printf("Input:");
	gets(a);

	for(i=0;i<=10;i++)
	{
		if(a[j]==' ')
		{
			b[k][i]='\0';
			k++;
			j++;
			i=0;
		}
		else if(a[j]=='\0')
		{
			b[k][i]='\0';
			break;
		}
		b[k][i]=a[j];
		j++;
	}
	
	for(q=1;q<=10;q++)
	{
		printf("%dWord ",q);
		for(w=0;w<=k;w++)
		{	
		  	if(q==strlen(b[w]))
	  		{
	  			strcpy(word[x],b[w]);
	  			count++;
	  			x++;
			}
		}
		x=0;
		printf("%d",count);
		if(count!=0)
		{
			printf(" (");
			while(x+1<=count)
			{
				printf("%s",word[x]);
				if(x+1!=count)
				printf(",");
				x++;
			}
			printf(")");
		}
		if(q!=10)
		printf("\n");
		count=0;
		x=0;
	}
	return 0;
 } 
