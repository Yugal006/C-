#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    // int random_number = rand() % (max - min + 1) + min;
    int score= 10, guess, x = rand() % (100 - 1 + 1) + 1;
    // printf("%d\n", x);