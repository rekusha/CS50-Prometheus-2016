#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    string s = GetString();
    
    printf("Say something: ");
    string t = GetString();

    if (strlen(s) == strlen(t))
    {
        int xx = 0;
        for (int i=0; i < (strlen(s)); i++)
        {
            if (s[i]==t[i])
            {
                xx = xx + 0;
            }
            else
            {
                xx = xx + 1;
            }
        }
    if (xx == 0)
        printf("You type the same thing!\n");
    }
    else
        printf("You type different thing!\n");
}
