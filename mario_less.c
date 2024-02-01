#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Give me a number: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < n - i - 1; spaces++)
        {
            printf(" ");
        }

        for (int hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}