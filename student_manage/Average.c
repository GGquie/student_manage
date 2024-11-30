#include "main.h"

void Average(STU *stulist)
{
    for (int i = 0; i < stnum; i++)
    {
        stulist[i].ave = (stulist[i].chinese + stulist[i].maths + stulist[i].english) / 3;
    }
    printf("平均分已计算。请使用L查看。\n");
}