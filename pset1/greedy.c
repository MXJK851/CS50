#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //know the money we need to give change
    float change;
    do
    {
        change = get_float("Total change(blew $1): \n");
    }
    while (change >= 1);
    //ask can we use quarter
        int quarter = 0;
        while(change>0.25)
        {
            change = change-0.25;
            quarter = quarter+1;
        }
    //ask can we use dime
        int dime = 0;
        while(change>0.1)
        {
            change = change-0.1;
            dime ++;
        }

   //ask can we use nikel
        int nikel = 0;
        while(change>0.05)
        {
            change = change-0.5;
            nikel ++;
        }

    //ask can we use penny
        int penny = 0;
        while(change>0)
        {
            change = change-0.01;
            penny ++;
        }
    //give sloution
    printf("NEED  quarter:%i,dime:%i,nikel:%i,penny:%i\n",quarter,dime,nikel,penny);
}