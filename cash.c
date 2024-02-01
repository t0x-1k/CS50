#include <cs50.h>
#include <stdio.h>

int n_quarters(int change);
int n_dimes(int change);
int n_nickels(int change);
int n_pennies(int change);

int main(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);

    int quarters = n_quarters(change);
    change = change - (quarters * 25);

    int dimes = n_dimes(change);
    change = change - (dimes * 10);

    int nickels = n_nickels(change);
    change = change - (nickels * 5);

    int pennies = n_pennies(change);
    change = change - (pennies * 1);

    int sum_count = quarters + nickels + dimes + pennies;

    printf("Change: %i\n", sum_count);
}


