#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char *computer[3] = {"ROCK", "PAPER", "SCISSOR"};
    char player[10];

    srand(time(0));

    int r;
    int p = 0, c = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter ROCK, PAPER or SCISSOR: ");
        scanf("%s", player);

        r = rand() % 3;

        if (strcmp(player, "ROCK") == 0 ||
            strcmp(player, "PAPER") == 0 ||
            strcmp(player, "SCISSOR") == 0)
        {
            printf("Computer chose: %s\n", computer[r]);

            if ((strcmp(computer[r], "PAPER") == 0 && strcmp(player, "SCISSOR") == 0) ||
                (strcmp(computer[r], "ROCK") == 0 && strcmp(player, "PAPER") == 0) ||
                (strcmp(computer[r], "SCISSOR") == 0 && strcmp(player, "ROCK") == 0))
            {
                printf("Player wins this round!\n");
                p++;
            }
            else if (strcmp(computer[r], player) == 0)
            {
                printf("Draw this round!\n");
            }
            else
            {
                printf("Computer wins this round!\n");
                c++;
            }
        }
        else
        {
            printf("INVALID INPUT FROM PLAYER\n");
            i--;
        }
    }

    if (p == c)
    {
        printf("\nDRAW");
    }
    else if (p > c)
    {
        printf("\nPLAYER WON THE MATCH");
    }
    else
    {
        printf("\nCOMPUTER WON THE MATCH");
    }

    return 0;
}