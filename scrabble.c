#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int player1_score = 0;
    int player2_score = 0;

    string player1 = get_string("Player1: ");
    string player2 = get_string("Player2: ");

    string letters[] = {"abcdefghijklmnopqrstuvwxyz"};

    int numbers[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    for (int i = 0; i < strlen(player1); i++)
    {
        if (isalpha(player1[i]))
        {
            int index = tolower(player1[i]) - 'a';
            player1_score += numbers[index];
        }
    }

    for (int i = 0; i < strlen(player2); i++)
    {
        if (isalpha(player2[i]))
        {
            int index = tolower(player2[i]) - 'a';
            player2_score += numbers[index];
        }
    }

    if (player1_score > player2_score)
    {
        printf("Player 1 wins!\n");
    }
    else if (player1_score < player2_score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}