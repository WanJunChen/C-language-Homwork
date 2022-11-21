#include<stdio.h>
#include<stdlib.h>
int power(int,int);
int main(void)
{
	int a,b,c;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	printf("Integer3:");
	scanf("%d",&c);
	
	/*1*/  
	int acount,x,suma=0,num1,q;
	printf("Result1:");
	num1=a;
	while(num1!=0)
	{
		acount++;
		num1/=10;
	}
	num1=a;
	while(num1!=0)
	{
		x=num1%10;
		suma+=power(x,acount);
		num1/=10;
	}
	num1=a;
	if(num1==suma)
    {
		
		printf("Yes");
		q=acount;
		while(num1!=0)
		{
			x=num1/power(10,q-1);
			printf(" %d",power(x,acount));
			num1%=power(10,q-1);			
			q--;
		}
	}
	else
	    printf("No");
	printf("\n");
	
	/*2*/  
	int bcount,y,sumb=0,num2,r;
	printf("Result2:");
	num2=b;
	while(num2!=0)
	{
		bcount++;
		num2/=10;
	}
	num2=b;
	while(num2!=0)
	{
		y=num2%10;
		sumb+=power(y,bcount);
		num2/=10;
	}
	num2=b;
	if(num2==sumb)
	{
		printf("Yes");
		r=bcount;
		while(num2!=0)
		{
			y=num2/power(10,r-1);
			printf(" %d",power(y,bcount));
			num2%=power(10,r-1);			
			r--;
		}
	}
	else
	    printf("No");
	printf("\n");
	
	/*3*/  
	int ccount,z,sumc=0,num3,s;
	printf("Result3:");
	num3=c;
	while(num3!=0)
	{
		ccount++;
		num3/=10;
	}
	num3=c;
	while(num3!=0)
	{
		z=num3%10;
		sumc+=power(z,ccount);
		num3/=10;
	}
	num3=c;
	if(num3==sumc)
	{
		printf("Yes");
		s=ccount;
		while(num3!=0)
		{
			z=num3/power(10,s-1);
			printf(" %d",power(z,ccount));
			num3%=power(10,s-1);			
			s--;
		}
	}
	else
	    printf("No");
	printf("\n");
	
	return 0;
}

int power(int num,int count)
{
    int i,power=1;
    for(i=1;i<=count;i++)
        power*=num;
    return power;
}
