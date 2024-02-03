#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char *s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found. ");
    return 1;
}
