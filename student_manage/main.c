#include "main.h"
int stuid = 1;
int stnum = 0;
int del_stnum = 0;
int main(int argc, char const *argv[])
{
    char commmand[1];
    STU stulist[99];
    STU del_stulist[99];
    Help();
    while (1)
    {
        printf("请输入命令=");
        scanf("%s", commmand);
        if (!strcmp(commmand, "T"))
        {
            Type(stulist);
        }
        else if (!strcmp(commmand, "L"))
        {
            if (stnum == 0)
                printf("成绩表为空！请先使用命令T录入学生成绩。\n");
            else
                List(stulist);
        }
        else if (!strcmp(commmand, "A"))
        {
            if (stnum == 0)
                printf("成绩表为空！请先使用命令T录入学生成绩。\n");
            else
                Average(stulist);
        }
        else if (!strcmp(commmand, "P"))
        {
            if (stnum == 0)
                printf("成绩表为空！请先使用命令T录入学生成绩。\n");
            else
                Sort(stulist);
        }
        else if (!strcmp(commmand, "S"))
        {
            if (stnum == 0)
                printf("成绩表为空！请先使用命令T录入学生成绩。\n");
            else
            {
                Search(stulist);
            }
        }
        else if (!strcmp(commmand, "D"))
        {
            if (stnum == 0)
                printf("成绩表为空！请先使用命令T录入学生成绩。\n");
            else
                Delete(stulist, del_stulist);
        }
        else if (!strcmp(commmand, "RE"))
        {
            Recovery(stulist,del_stulist);
        }
        else if (!strcmp(commmand, "DL"))
        {
            Del_list(del_stulist);
        }
        else if (!strcmp(commmand, "C"))
        {
            system("clear");
        }
        else if (!strcmp(commmand, "H"))
        {
            Help();
        }
        else if (!strcmp(commmand, "Q"))
        {
            break;
        }
    }
    return 0;
}