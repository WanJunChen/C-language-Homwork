#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int aa,ab,ac,ba,bb,bc,ca,cb,cc,da,db,dc;
	
	printf("Triangle1\n");
	printf("Edge1:");
	scanf("%d",&aa);
	printf("Edge2:");
	scanf("%d",&ab);
	printf("Edge3:");
	scanf("%d",&ac);
	
	printf("Triangle2\n");
	printf("Edge1:");
	scanf("%d",&ba);
	printf("Edge2:");
	scanf("%d",&bb);
	printf("Edge3:");
	scanf("%d",&bc);
	
	printf("Triangle3\n");
	printf("Edge1:");
	scanf("%d",&ca);
	printf("Edge2:");
	scanf("%d",&cb);
	printf("Edge3:");
	scanf("%d",&cc);
	
	printf("Triangle4\n");
	printf("Edge1:");
	scanf("%d",&da);
	printf("Edge2:");
	scanf("%d",&db);
	printf("Edge3:");
	scanf("%d",&dc);
	
	if(aa+ab>ac&&ab+ac>aa&&aa+ac>ab)
	{
	if(aa*aa+ab*ab<ac*ac||ab*ab+ac*ac<aa*aa||aa*aa+ac*ac<ab*ab)
	printf("1\n");
	if(aa*aa+ab*ab>ac*ac&&ab*ab+ac*ac>aa*aa&&aa*aa+ac*ac>ab*ab)
	printf("2\n");
	if(aa*aa+ab*ab==ac*ac||ab*ab+ac*ac==aa*aa||aa*aa+ac*ac==ab*ab)
	printf("3\n");
    }
    else
    printf("0\n");

    if(ba+bb>bc&&bb+bc>ba&&ba+bc>bb)
    {
	if(ba*ba+bb*bb<bc*bc||bb*bb+bc*bc<ba*ba||ba*ba+bc*bc<bb*bb)
	printf("1\n");
	if(ba*ba+bb*bb>bc*bc&&bb*bb+bc*bc>ba*ba&&ba*ba+bc*bc>bb*bb)
	printf("2\n");
	if(ba*ba+bb*bb==bc*bc||bb*bb+bc*bc==ba*ba||ba*ba+bc*bc==bb*bb)
	printf("3\n");
	}
	else
    printf("0\n");
	
	if(ca+cb>cc&&cb+cc>ca&&ca+cc>cb)
	{
	if(ca*ca+cb*cb<cc*cc||cb*cb+cc*cc<ca*ca||ca*ca+cc*cc<cb*cb)
	printf("1\n");
	if(ca*ca+cb*cb>cc*cc&&cb*cb+cc*cc>ca*ca&&ca*ca+cc*cc>cb*cb)
	printf("2\n");
	if(ca*ca+cb*cb==cc*cc||cb*cb+cc*cc==ca*ca||ca*ca+cc*cc==cb*cb)
	printf("3\n");
    }
	else
    printf("0\n");
	
	if(da+db>dc&&db+dc>da&&da+dc>db)
	{
	if(da*da+db*db<dc*dc||db*db+dc*dc<da*da||da*da+dc*dc<db*db)
	printf("1");
	if(da*da+db*db>dc*dc&&db*db+dc*dc>da*da&&da*da+dc*dc>db*db)
	printf("2");
	if(da*da+db*db==dc*dc||db*db+dc*dc==da*da||da*da+dc*dc==db*db)
	printf("3");
	}
	else
    printf("0");
	
	return 0;
}
