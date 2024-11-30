#include "main.h"

void Type(STU *stulist)
{
    int num;
    float c, m, e;
    printf("请输入学生人数：");
    scanf("%d", &num);
    printf("请输入%d名学生的三门课成绩：\n", num);
    printf("学号 语文 数学 外语\n");
    int now_snum = stnum;
    for (int i = now_snum; i < now_snum + num; i++)
    {
        printf("%d       ", stuid);
        scanf("%f %f %f", &c, &m, &e);
        stulist[i].id = stuid;
        stulist[i].chinese = c;
        stulist[i].maths = m;
        stulist[i].english = e;
        stulist[i].ave = 0;
        stuid++;
        stnum++;
    }
}