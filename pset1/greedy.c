#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float change = GetFloat();
    for (int q = 0; change < 0 ;q++)
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    change = roundf(change*100);
    int cahgeint = change;
    int c25 = cahgeint / 25;
    int c10 = (cahgeint - c25*25) / 10;
    int c5 = (cahgeint - (c25*25) - (c10*10)) / 5;
    int c1 = cahgeint - (c25*25) - (c10*10) - (c5*5);
    int x = c25+c10+c5+c1;
//    printf("have %f\n", change);
//    printf("have %i\n", cahgeint);
//    printf("c25 %i\n", c25);
//    printf("c10 %i\n", c10);
//    printf("c5 %i\n", c5);
//    printf("c1 %i\n", c1);
    printf("%i\n", x);
}
