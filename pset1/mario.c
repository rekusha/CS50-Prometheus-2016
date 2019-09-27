#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int height = GetInt();
    for (int q = 0;((height > 23)||(height < 0));q++)
    {
        printf("Height: ");
        height = GetInt();
    }
    for (int i=0;i<height;i++)
    {
        for (int sp = i; sp < height-1; sp++)
        {
        printf(" ");
        }
        for (int hash = height - i - 2; hash < height; hash++)
        {
        printf("#");
        }
        printf("\n");
    }
}
