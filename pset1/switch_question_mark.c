#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x = get_int("input from 1 to 6: ");
    int y;
    switch (x)
    {
        case 1:
        printf("nop!");
        y = 1;
        break;
        case 2:
        printf("nop!");
        y = 1;
        break;
        case 3:
        printf("nop!");
        y = 1;
        break;
        case 4:
        printf("nop!");
        y = 1;
        break;
        case 5:
        printf("nop!");
        y = 1;
        break;
        case 6:
        printf("yes!");
        y = 2;
        break;
    }
    if (y==2)
    {
        printf("ok!you are right by 1 time\n");
    }
    else
    {
             x = get_int("input from 1 to 6: ");
    switch (x)
    {
        case 1:
        printf("nop!");
        y = 1;
        break;
        case 2:
        printf("nop!");
        y = 1;
        break;
        case 3:
        printf("nop!");
        y = 1;
        break;
        case 4:
        printf("nop!");
        y = 1;
        break;
        case 5:
        printf("nop!");
        y = 1;
        break;
        case 6:
        printf("yes!");
        y = 2;
        break;
    }
    if (y==2)
    {
        printf("ok!you are right by 2 time\n");
    }
    else
    {
        printf("bad luck !\n");
    }
    }
}

