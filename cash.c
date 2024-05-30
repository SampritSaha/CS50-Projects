#include <cs50.h>
#include <stdio.h>

int calculateCoins(int remainingAmount, int coinValue);

int main(void)
{
    int changeOwed;

    do
    {
        changeOwed = get_int("Change owed: ");
    }
    while (changeOwed < 0);

    int numQuarters = calculateCoins(changeOwed, 25);
    int remainingAmount = changeOwed % 25;

    int numDimes = calculateCoins(remainingAmount, 10);
    remainingAmount %= 10;

    int numNickels = calculateCoins(remainingAmount, 5);
    remainingAmount %= 5;

    int numPennies = remainingAmount;
    int totalCoins = numQuarters + numDimes + numNickels + numPennies;
    printf("%i\n", totalCoins);

    return 0;
}


int calculateCoins(int remainingAmount, int coinValue)
{
    return remainingAmount / coinValue;
}