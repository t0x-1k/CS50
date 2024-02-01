#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Give me a number: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < n - i - 1; spaces++)
        {
            printf(" ");
        }
        for (int left_hashes = 0; left_hashes < i + 1; left_hashes++)
        {
            printf("#");
        }
        for (int inner_spaces = 0; inner_spaces < 2; inner_spaces++)
        {
            printf(" ");
        }
        for (int right_hashes = 0; right_hashes < i + 1; right_hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}