#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = 0;
    int counter = 0;
    int total_sum = 0;

    do
    {
        n = get_long("Number: ");
    }
    while (n < 1);

    long store_n = n;

    while (store_n > 0)
    {
        int last_digit = store_n % 10; // Extract the last digit

        // Double the digit and add the sum of its digits to total_sum
        if (counter % 2 != 0)
        {
            int check_double = last_digit * 2;
            if (check_double > 9)
            {
                total_sum += (check_double / 10) + (check_double % 10);
            }
            else
            {
                total_sum += check_double;
            }
        }
        else
        {
            total_sum += last_digit;
        }

        store_n /= 10;
        counter++;
    }
    // using exponential notation to check for matching beginning numbers
    if (total_sum % 10 == 0)
    {
        if ((n >= 34e13 && n < 35e13) || (n >= 37e13 && n < 38e13))
        {
            printf("AMEX\n");
        }
        else if (n >= 51e14 && n < 56e14)
        {
            printf("MASTERCARD\n");
        }
        else if ((n >= 4e12 && n < 5e12) || (n >= 4e15 && n < 5e15))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}