#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    //do while ensure user input is a number 0 or greater!
    int total;
    do
    {
        total = get_int("How many cents is the customer owed? ");
    }
    while (total < -1);
    //the cent total is then returned
    return total;
}

int calculate_quarters(int cents)
{
    //this is the format for each method below
    // coint counter is set to 0
    int num_quarters = 0;
    //while the value of cents is still greater than the value of the coin being compared, the coin counter is incremented and the cents total is decreased by the coin value.
    while (cents >= 25)
    {
        cents = cents - 25;
        num_quarters++;
    }
    //the coin counter is returned, and the cents variable is adjusted to cents - (coin value * coin counter)
    return num_quarters;
}

int calculate_dimes(int cents)
{
    int num_dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        num_dimes++;
    }
    return num_dimes;
}

int calculate_nickels(int cents)
{
    int num_nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        num_nickels++;
    }
    return num_nickels;
}

int calculate_pennies(int cents)
{
    int num_pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        num_pennies++;
    }
    return num_pennies;
}
