#include "main.h"
void Recovery(STU *stulist,STU*del_stulist)
{
    int n;
    printf("请输入要恢复的学生的学号：");
    scanf("%d",&n);
    int re_index=Find_id(del_stulist,n);
    if(re_index==-1)
        printf("未找到要恢复学生的信息");
    else
    {
        stulist[stnum]=del_stulist[re_index];
        for(int i=re_index;i<del_stnum-1;i++)
        {
            del_stulist[i]=del_stulist[i+1];
        }
        del_stnum--;
        stnum++;
    }
}