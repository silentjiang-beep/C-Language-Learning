#include <stdio.h>
int main()
{
	int start,pass_minutes;
	scanf("%d %d",&start,&pass_minutes);
	int hours=start/100;
	int minutes=start%100;
	int total_minutes=hours*60+minutes;
	int new_minutes=total_minutes+pass_minutes;
	int end_hours=new_minutes/60;
	int end_minutes=new_minutes%60;
	printf("%d%02d\n", end_hours, end_minutes);
	return 0;
}


