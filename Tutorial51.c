// Question is -- Rock,Paper And Scissors..
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenerateRandomNumber(int n)
{
    srand(time(NULL)); /*srand takes seed as an input and is define inside stdlib.h*/
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For rock paper scissors - returns 1 if c1>c2 and 0 otherwise. if c1=c2 it will returns -1..
    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }

    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }

    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }

    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    char name[34];
    printf("Welcome to the ROck, Paper,Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("Player 1's turn:\n");
        printf("Choose 1 for Rock,2 for Paper and 3 for scissors:\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choose %c\n\n", playerchar);

        // Generate computer's input
        printf("computer's turn:\n");
        temp = GenerateRandomNumber(3);
        compchar = dict[temp];
        printf("CPU choose %c\n\n", compchar);

        // compare the scores..
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU got it!\n");
        }

        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("Its a draw!\n");
        }

        else
        {
            playerscore += 1;
            printf("You got it!\n");
        }
        printf("You:%d\nCPU:%d\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("YOU WIN THE GAME\n");
    }

    else if (playerscore < compscore)
    {
        printf("CPU WIN THE GAME\n");
    }

    else
    {
        printf("ITS A DRAW\n");
    }
    return 0;
}
