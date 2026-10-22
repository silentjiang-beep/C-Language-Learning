#include <stdio.h>
int main()
{
	const int amount = 100; 
	int price =0,price1 =0,price2 =0;//定义整型变量：price1-总金额, price2-消费金额  (int了一个叫xxx的程序变量 )
	printf("请输入总金额(元)\t");//学会用\t做格式对齐  也可以多次使用,如\t\t来使得前后文本内容长度不一致时让结果能对齐 
	scanf("%d",&price1); 
		printf("请输入消费金额(元)\t");
	scanf("%d",&price2); //scanf的作用是:将输入的数值赋予 price2
	int charge= price1-price2;
	printf("找零:\t\t\t%d元\n",charge); 
	return 0;
}

