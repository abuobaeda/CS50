#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int
main(void)
{
    int coins = 0;
    
    float owed = 0;
    do
    {
        printf("O, hai!  How much change is owed? ");
        owed = GetFloat();
    } while (owed <= 0);
    
    int owed_i = 0;
    owed_i = round(owed * 100);
    
    while (owed_i >= QUARTER)
    {    
        owed_i -= QUARTER;

        coins++;
    }
    
    while (owed_i >= DIME)
    {    
        owed_i -= DIME;

        coins++;
    }   
    
    while (owed_i >= NICKEL)
    {    
        owed_i -= NICKEL;

        coins++;
    }
    
    while (owed_i >= PENNY)
    {
        owed_i -= PENNY;

        coins++;
    }
    printf("%d\n", coins);
}