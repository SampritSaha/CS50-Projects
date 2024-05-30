#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");
    int let = 0, word = 1, sen = 0;
    for (int n = 0; n < strlen(s); n++)
    {
        if (isalpha(s[n]))
        {
            let++;
        }
        if (s[n] == ' ')
        {
            word++;
        }
        if (s[n] == '.' || s[n] == '?' || s[n] == '!')
        {
            sen++;
        }
    }

    float L = let / (float) word * 100;
    float S = sen / (float) word * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
