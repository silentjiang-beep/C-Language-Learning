#include <stdio.h>
int main()
{    //成绩判断器
     const int stand_grade1=60; //成绩及格线
     const int stand_grade2=80;//成绩良好线
     const int stand_grade3=90;//优秀线 
     const int stand_grade4=100;//成绩满分线 
	 int grade=0;
	 printf("请输入你的成绩:");
	 scanf("%d",&grade); 
     printf("\n"); 
     if (grade<0||grade>stand_grade4) 
     {
	 printf("成绩无效\n");
    }
	else if (grade < stand_grade1)
    {
    printf("成绩不合格\n");
     }
    else if (grade < stand_grade2)
    {
    printf("成绩合格\n");
     }
    else if (grade < stand_grade3)
    {
    printf("成绩良好\n");
     }
    else if (grade < stand_grade4)
    {
    printf("成绩优秀\n");
     }
    else
    {
    printf("成绩满分\n");

    }
	return 0;
}


