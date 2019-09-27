#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string userName;
    do 
        userName = GetString();
    while (userName == NULL);
    for (int i = 0, n = strlen(userName); i<n; i++)
    {
        if (((userName[i] > 'A' && userName[i] < 'Z') || (userName[i] > 'a' && userName[i] < 'z')) && ((i == 0) || ((userName[i-1] < 'A' || userName[i-1] > 'Z') && (userName[i-1] < 'a' || userName[i-1] > 'z')) ))
        {
            printf("%c", toupper(userName[i]));    
        }
    }
printf("\n");
}
