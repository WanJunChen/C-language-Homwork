#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i;
	printf("Special Prize\n");
	printf("No1:");
	scanf("%d",&a);
	printf("No2:");
	scanf("%d",&b);
	printf("No3:");
	scanf("%d",&c);
	
	printf("First Prize\n");
	printf("No1:");
	scanf("%d",&d);
	printf("No2:");
	scanf("%d",&e);
	printf("No3:");
	scanf("%d",&f);
	
	printf("My number\n");
	printf("No1:");
	scanf("%d",&g);
	printf("No2:");
	scanf("%d",&h);
	printf("No3:");
	scanf("%d",&i);
	
	int n1,n2,n3;
	if(g==a||g==b||g==c)
	{
		if(g==d||g==e||g==f)
	    n1=2000000+200000;
		else if(g%10000000==d%10000000||g%10000000==e%10000000||g%10000000==f%10000000)
		n1=2000000+40000;
		else if(g%1000000==d%1000000||g%1000000==e%1000000||g%1000000==f%1000000)
	    n1=2000000+10000;
	    else if(g%100000==d%100000||g%100000==e%100000||g%100000==f%100000)
	    n1=2000000+4000;
		else if(g%10000==d%10000||g%10000==e%10000||g%10000==f%10000)
	    n1=2000000+1000;
	    else if(g%1000==d%1000||g%1000==e%1000||g%1000==f%1000)
	    n1=2000000+200;
		else n1=2000000;
	} 
	
	
	else if(g==d||g==e||g==f)
	n1=200000;
	else if(g%10000000==d%10000000||g%10000000==e%10000000||g%10000000==f%10000000)
	n1=40000;
	else if(g%1000000==d%1000000||g%1000000==e%1000000||g%1000000==f%1000000)
	n1=10000;
	else if(g%100000==d%100000||g%100000==e%100000||g%100000==f%100000)
	n1=4000;
	else if(g%10000==d%10000||g%10000==e%10000||g%10000==f%10000)
	n1=1000;
	else if(g%1000==d%1000||g%1000==e%1000||g%1000==f%1000)
	n1=200;
	else n1=0;
	
	if(h==a||h==b||h==c)
	{
		
		if(h==d||h==e||h==f)
	    n2=2000000+200000;
		else if(h%10000000==d%10000000||h%10000000==e%10000000||h%10000000==f%10000000)
		n2=2000000+40000;
		else if(h%1000000==d%1000000||h%1000000==e%1000000||h%1000000==f%1000000)
	    n2=2000000+10000;
	    else if(h%100000==d%100000||h%100000==e%100000||h%100000==f%100000)
	    n2=2000000+4000;
		else if(h%10000==d%10000||h%10000==e%10000||h%10000==f%10000)
	    n2=2000000+1000;
	    else if(h%1000==d%1000||h%1000==e%1000||h%1000==f%1000)
	    n2=2000000+200;
		else n2=2000000;
	} 
	
	else if(h==d||h==e||h==f)
	n2=200000;
	else if(h%10000000==d%10000000||h%10000000==e%10000000||h%10000000==f%10000000)
	n2=40000;
	else if(h%1000000==d%1000000||h%1000000==e%1000000||h%1000000==f%1000000)
	n2=10000;
	else if(h%100000==d%100000||h%100000==e%100000||h%100000==f%100000)
	n2=4000;
	else if(h%10000==d%10000||h%10000==e%10000||h%10000==f%10000)
	n2=1000;
	else if(h%1000==d%1000||h%1000==e%1000||h%1000==f%1000)
	n2=200;
	else n2=0;
	
	if(i==a||i==b||i==c)
	{
		
		if(i==d||g==e||g==f)
	    n3=2000000+200000;
		else if(i%10000000==d%10000000||i%10000000==e%10000000||i%10000000==f%10000000)
		n3=2000000+40000;
		else if(i%1000000==d%1000000||i%1000000==e%1000000||i%1000000==f%1000000)
	    n3=2000000+10000;
	    else if(i%100000==d%100000||i%100000==e%100000||i%100000==f%100000)
	    n3=2000000+4000;
		else if(i%10000==d%10000||i%10000==e%10000||i%10000==f%10000)
	    n3=2000000+1000;
	    else if(i%1000==d%1000||i%1000==e%1000||i%1000==f%1000)
	    n3=2000000+200;
		else n3=2000000;
	} 
	
	else if(i==d||i==e||i==f)
	n3=200000;
	else if(i%10000000==d%10000000||i%10000000==e%10000000||i%10000000==f%10000000)
	n3=40000;
	else if(i%1000000==d%1000000||i%1000000==e%1000000||i%1000000==f%1000000)
	n3=10000;
	else if(i%100000==d%100000||i%100000==e%100000||i%100000==f%100000)
	n3=4000;
	else if(i%10000==d%10000||i%10000==e%10000||i%10000==f%10000)
	n3=1000;
	else if(i%1000==d%1000||i%1000==e%1000||i%1000==f%1000)
	n3=200;
	else n3=0;
	
	printf("Output:%d",n1+n2+n3);
	
	return 0;
}
