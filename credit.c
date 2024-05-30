//unsolved
#include <cs50.h>
#include <stdio.h>
int check();

int main (void)
{
    long n;
    do
    {
        n = get_long ("Number: ");
    }
    while (n < 0);
    int digit = 0;

    while(n)
    {
        n = n / 10;
        digit++;
    }
    printf("no of digit: %i \n", digit);

    if(digit==13)
    {
        //Visa check
        int ch = check( n, digit);
        if(ch)
        {
            printf("VISA");
        }
        else
        {
            printf("INVALID");
        }
    }

    else  if(digit==15)
    {
        //American Express check
        int ch = check( n, digit);
        if(ch)
        {
            printf("AMIRICAN EXPRESS");
        }
        else
        {
            printf("INVALID");
        }
     }

    else if(digit==16){
        if(n/10000000000000000==4)
        {
            //visa check
            int ch = check( n, digit);
            if(ch)
            {
                printf("VISA");
            }
            else
            {
                printf("INVALID");
            }
        }

        else
        {
            //master card check
            int ch = check( n, digit);
            if(ch)
            {
                printf("MASTER CARD");
            }
            else
            {
                printf("INVALID");
            }
        }

    }

    else{
        //Invalid
        printf("INVALID\n");
    }
}

int check(long n, int digit)
{
    int sum1=0;
    long temp=n;
    int alter=1;

    if(digit%2==0){
        temp=temp/10;
    }

    while ( temp > 0 )
    {
        if( alter )
        {
            int last_digi = n % 10;
            sum1 = sum1 + 2 * last_digi;
        }
        alter = !alter;
        temp = temp / 10;
    }

    if(sum%10==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
