#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        string text = GetString();
        for (int i=0, n=strlen(text); i<n; i++)
        {
            if isalpha(text[i])
            {
                if islower(text[i])
                printf("%c", ((((text[i]-97)+k)%26)+97));
                if isupper(text[i])
                printf("%c", ((((text[i]-65)+k)%26)+65));
            }
            else
            {
                printf("%c", text[i]);
            }   
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf ("usage : ./caesar + key \n");
        return 1;
    }

}
