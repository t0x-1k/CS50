#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int letters = 0;
    int words = 0;
    int sentence = 0;

    string input = get_string("Text: ");

    if (strlen(input) > 0)
    {
        words = 1;
    }

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isalpha(input[i]))
        {
            letters += 1;
        }
        else if (input[i] == ' ' && i < n - 1 && input[i + 1] != ' ')
        {
            words += 1;
        }
        else if (input[i] == '.' || input[i] == '?' || input[i] == '!')
        {
            sentence += 1;
        }
    }

    float L = (letters / (float) words) * 100;
    float S = (sentence / (float) words) * 100;

    float grade = 0.0588 * L - 0.296 * S - 15.8;

    int grade_level = round(grade);

    if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade_level);
    }
    return 0;
}