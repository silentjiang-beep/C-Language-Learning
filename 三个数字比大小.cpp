#include <stdio.h>
int main()
{
	//三个数字比大小 
    int a=0;
    int b=0;
    int c=0;
	printf("请输入三个整数:");
	scanf("%d" "%d" "%d",&a,&b,&c);
	int max=0;
	if (a > b && a > c)
	{
		max=a;
		printf("max为%d\n",a);
	}
	else if(b > a && b >c ) 
	{
			max=b;
		printf("max为%d\n",b);
	}
	else if(c > a && c >b ) 
	{
			max=c;
		printf("max为%d\n",c);
	}
	return 0;
}


