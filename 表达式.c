 #include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf("%d %d",&hour1,&minute1); //这里2个%d之间要用空格,这样就通过空格来区分两个前后的输入数据. 
	scanf("%d %d",&hour2,&minute2); //不要用逗号,很多人不习惯使用逗号来区分数据,使用空格更符合现在的使用习惯 
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t =t2-t1; 
	printf("时间差是%d小时%d分.",t/60,t%60);
	return 0;
}


