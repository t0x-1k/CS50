#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool digits_only(string s);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (!digits_only(argv[1]))
    {
        printf("Argument must be an integer.\n");
        return 1;
    }

    int key = atoi(argv[1]);
    string plain_text = get_string("plaintext:  ");

    printf("ciphertext: ");

    int n = strlen(plain_text);

    for (int i = 0; i < n; i++)
    {
        printf("%c", rotate(plain_text[i], key));
    }
    printf("\n");
    return 0;
}

bool digits_only(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int key)
{
    if (isalpha(c))
    {
        char base = islower(c) ? 'a' : 'A';
        return (c - base + key) % 26 + base;
    }
    else
    {
        return c;
    }
}
