#include "main.h"

void Search(STU *stulist)
{
    int n;
    printf("请输入要查询的学生学号：");
    scanf("%d", &n);
    int searchstu = Find_id(stulist, n);
    if (searchstu == -1)
    {
        printf("未找到\n");
    }
    else
    {
        printf("学号  语文  数学  外语  平均分\n");
        printf("%d     %.1f  %.1f  %.1f   %.1f\n", stulist[searchstu].id, stulist[searchstu].chinese, stulist[searchstu].maths, stulist[searchstu].english, stulist[searchstu].ave);
    }
}