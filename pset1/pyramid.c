#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("please input the height of the pyramid");
    for (int i = 0; i < height; i++)
    {
        //print spaces
        for (int x = 0; x<(height-1-i); x++)
        {
             printf(" ");
        }
        //print hashes
        for (int y = 0; y<(i+1); y++)
        {
             printf("#");
        }
        //print new line
        printf("\n");
    }
}