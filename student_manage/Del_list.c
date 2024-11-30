#include "main.h"

void Del_list(STU *del_stulist)
{
    printf("已删除学生成绩如下：\n");
    printf("学号  语文  数学  外语  平均分\n");
    for (int i = 0; i < del_stnum; i++)
    {
        printf("%d     %.1f  %.1f  %.1f   %.1f\n", del_stulist[i].id, del_stulist[i].chinese, del_stulist[i].maths, del_stulist[i].english, del_stulist[i].ave);
    }
}