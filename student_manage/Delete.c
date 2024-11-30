#include "main.h"

void Delete(STU *stulist, STU *del_stulist)
{
    int n;
    printf("请输入要删除的学生学号：");
    scanf("%d", &n);
    int del_index = Find_id(stulist, n);
    if (del_index == -1)
        printf("未找到要删除学生的信息");
    else
    {
        del_stulist[del_stnum] = stulist[del_index];
        for (int i = del_index; i < stnum - 1; i++)
        {
            stulist[i] = stulist[i + 1];
        }
        stnum--;
        del_stnum++;
    }
}