#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./ceaser key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage ./ceaser key\n");
            return 1;
        }
    }
    int k = atoi(argv[1]);
    string s = get_string("Text : ");
    printf("Ciphertext: ");

    for (int j = 0; j < strlen(s); j++)
    {
        if (isupper(s[j]))
        {
            printf("%c", (s[j] - 65 + k) % 26 + 65);
        }
        else if (islower(s[j]))
        {
            printf("%c", (s[j] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", s[j]);
        }
    }
    printf("\n");
}
