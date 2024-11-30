#include "main.h"

void Sort(STU *stulist)
{
    STU tmp;
    for (int i = 0; i < stnum - 1; i++)
    {
        for (int j = 0; j < stnum - i - 1; j++)
        {
            if (stulist[j].ave < stulist[j + 1].ave)
            {
                tmp = stulist[j];
                stulist[j] = stulist[j + 1];
                stulist[j + 1] = tmp;
            }
        }
    }
    printf("完成排序。请使用命令L查看。\n");
}