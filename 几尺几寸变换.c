#include <stdio.h>
int main()
{
	printf("请分别输入你身高的英尺和英寸");
	printf("例如:5英尺7英寸请输入5 7\n");
	int foot;
	int inch;
	scanf("%d %d",&foot,&inch);
	printf("你的身高是:%f米.\n",((foot+inch/12.0)*0.3048));
	return 0;
}


