#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Perform arithmetic
    printf("%i plus %i is %i \n", x, y, y+x);
    printf("%i minus %i is %i \n", x, y, x-y);
    printf("%i times %i is %i \n", x, y, y * x);
    printf("%i divided by %i is %i \n", x, y, x/y);
    printf("remainder of %i divided by %i is %i \n", x, y, x%y);

}