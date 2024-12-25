#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    // int random_number = rand() % (max - min + 1) + min;
    int score= 10, guess, x = rand() % (100 - 1 + 1) + 1;
    // printf("%d\n", x);
    for (int i = 0; i <10; i++)
    {
        printf("Guess the no: \n");
        scanf("%d", &guess);
        if (i==9){
            printf("Game over!, you lost :(\n");
            break;
        }
        else if (guess < x)
        {
            printf("the guess number is small from real number\n");
            score--;
        }        
        else if (guess > x)
        {
            printf("the guess number is greater from real number\n");
            score--;
        }
        else if (guess == x)
        {
            printf("Congo, u guess the correct number i.e %d :)\n", x);
            break;
        }
        
    }
    printf("Here is your score: %d", score);
    return 0;
}