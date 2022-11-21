#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,ia,suma=0,ib,sumb=0,ic,sumc=0;
	printf("Integer1:");
	scanf("%d",&a);
	printf("Integer2:");
	scanf("%d",&b);
	printf("Integer3:");
	scanf("%d",&c);
	
	/*1*/
	printf("Result1:");
	for(ia=1;ia<a;ia++)
	{ 
        if(a%ia==0)
		{ 
            suma+=ia; 
        } 
    } 
    if(a==suma)
	{ 
        printf("Yes");
        for(ia=1;ia<a;ia++)
        { 
        if(a%ia==0)
        printf(" %d",ia);
        }
        printf("\n");
    } 
    else
	{ 
        printf("No\n");
    }
    
    /*2*/
	printf("Result2:");
    for(ib=1;ib<b;ib++)
	{ 
        if(b%ib==0)
		{ 
            sumb+=ib; 
        } 
    } 
    if(b==sumb)
	{ 
        printf("Yes");
        for(ib=1;ib<b;ib++)
        { 
        if(b%ib==0)
        printf(" %d",ib);
        }
        printf("\n");
    } 
    else
	{ 
        printf("No\n");
    }
    
    /*3*/
	printf("Result3:");
    for(ic=1;ic<c;ic++)
	{ 
        if(c%ic==0)
		{ 
            sumc+=ic; 
        } 
    } 
    if(c==sumc)
	{ 
        printf("Yes");
        for(ic=1;ic<c;ic++)
        { 
        if(c%ic==0)
        printf(" %d",ic);
        } 
    } 
    else
	{ 
        printf("No");
    }

    return 0; 
} 
