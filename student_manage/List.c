#include "main.h"

void List(STU *stulist)
{
    printf("学生成绩如下：\n");
    printf("学号  语文  数学  外语  平均分\n");
    for (int i = 0; i < stnum; i++)
    {
        printf("%d     %.1f  %.1f  %.1f   %.1f\n", stulist[i].id, stulist[i].chinese, stulist[i].maths, stulist[i].english, stulist[i].ave);
    }
}