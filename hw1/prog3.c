#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	float mynum1=123.456789012345f;
	double mynum2=123.456789012345;
	
	printf("%7.2f\n",mynum1);
	printf("%7.2f\n",mynum2);
	printf("%+011.6f\n",mynum1);
	printf("%+011.6f\n",mynum2);
	printf("%16.12f\n",mynum1);
	printf("%16.12f",mynum2);
	
	return 0;
}
