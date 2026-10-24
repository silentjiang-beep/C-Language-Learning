#include <stdio.h>
int main()
{
	int hour1=0,hour2=0,minute1=0,minute2=0;
	scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int ih= hour2-hour1;
    int im=minute2-minute1;
    if (im<0)
    {
	im=im+60;
	ih=ih-1;
	}
	printf("时间差是%d小时%d分钟.\n",ih,im);
	return 0;
}


