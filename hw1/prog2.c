#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	int mynum;
	mynum=12345;
	printf("%12d\n",mynum);
	printf("%+d\n",mynum);
	printf("%08d\n",mynum);
	printf("%d\n",mynum);
	printf("%7d",mynum);
	return 0;
}
