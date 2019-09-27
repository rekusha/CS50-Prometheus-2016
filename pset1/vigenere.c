#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string k = argv[1];
        for (int i=0, n=strlen(k); i<n; i++)
            if isalpha(k[i])
            {}
            else
            {
              printf("key must be fully alphabetical\n");
                return 1;
            }
        string text = GetString();
        for (int i=0, n=strlen(text), j=0; i<n; i++)
        {
            if isalpha(text[i])
            {
                if islower(text[i])
                {
                    printf("%c", ((((text[i]-97)+((toupper(k[j%strlen(k)])-65)))%26)+97));
                    j++;
                }
                if isupper(text[i])
                {
                    printf("%c", ((((text[i]-65)+((toupper(k[j%strlen(k)])-65)))%26)+65));
                    j++;
                }
            }
            else
            {
                printf("%c", text[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("\n");
        return 1;
    }
}
