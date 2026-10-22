#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("请输入a的值:");
	scanf("%d",&a); 
	printf("请输入b的值:");
	scanf("%d",&b); 
	int a1=a;
        a=b;
	    b=a1;
	printf("交换数值之后a=%d,b=%d",a,b);
	return 0;
}


