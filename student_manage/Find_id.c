#include "main.h"
int Find_id(STU *stulist, int n)
{

    for (int i = 0; i < stnum; i++)
    {
        if (stulist[i].id == n)
            return i;
    }
    return -1;
}