#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数值:");
	scanf("%d %d",&a,&b); 
	int c1=a+b;
	int c2=a-b;
	int c3=a*b;
	int c4=a/b; 
	printf("%d+%d=%d\n",a,b,c1);
	printf("%d-%d=%d\n",a,b,c2);
	printf("%d*%d=%d\n",a,b,c3);
	printf("%d/%d=%d\n",a,b,c4);
	return 0;
}


