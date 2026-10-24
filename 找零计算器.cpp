#include <stdio.h>
int main()
{
  //找零计算器
    int price=0;
	int bill=0;
	int change=0;
	int x=0; 
    printf("请输入账单:");
    scanf("%d",&bill); 
    printf("请输入金额:");
    scanf("%d",&price); 
    change=price-bill;
    x=bill-price; 
    if (change>=0)
	{printf("找零:%d元\n",change);} 
	else{printf("金额不足,还需%d元.\n", x);}
	
	return 0;
}


