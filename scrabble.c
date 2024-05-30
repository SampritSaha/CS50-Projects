#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int check();

int main(void)
{
    string str1 = get_string("Player 1: ");
    string str2 = get_string("Player 2: ");

    int s1 = check(str1);
    int s2 = check(str2);

    if (s1 > s2)
    {
        printf("Player 1 wins!\n");
    }
    else if (s2 > s1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int check(string s)
{
    int i = 0;
    int sum = 0;
    while (s[i] != '\0')
    {
        if (toupper(s[i]) == 'D' || toupper(s[i]) == 'G')
        {
            sum = sum + 2;
        }
        else if (toupper(s[i]) == 'B' || toupper(s[i]) == 'C' || toupper(s[i]) == 'M' ||
                 toupper(s[i]) == 'P')
        {
            sum = sum + 3;
        }
        else if (toupper(s[i]) == 'F' || toupper(s[i]) == 'H' || toupper(s[i]) == 'V' ||
                 toupper(s[i]) == 'W')
        {
            sum = sum + 4;
        }
        else if (toupper(s[i]) == 'K')
        {
            sum = sum + 5;
        }
        else if (toupper(s[i]) == 'J' || toupper(s[i]) == 'X')
        {
            sum = sum + 8;
        }
        else if (toupper(s[i]) == 'Q' || toupper(s[i]) == 'Z')
        {
            sum = sum + 10;
        }
        else
        {
            sum = sum + 1;
        }
        i = i + 1;
    }
    return sum;
}
