#include <stdio.h>
int main()
{
	//计算薪水
	const double hourly_rate=8.25; //每小时工资 
	const double stand_hour=40; //标准工作时长 
	double salary=0.0; //薪水 
	int hours=0;  //实际工作时长 
	printf("请输入工作时长:=");
	scanf("%d",&hours); 
	printf("\n");
	if  (hours> stand_hour)
	{
	 salary=hourly_rate*stand_hour+(hours-stand_hour)*(hourly_rate*1.5);
	} 
	else{
	xinshui=hourly_rate*hours;
	}
	printf("薪水为:%.2f\n",salary);
	return 0;
}


