#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int user;
    int bot = rand() % (3 - 1 + 1) + 1;

    int user_points = 0, bot_points = 0;
    printf("%d\n", bot);
    for (int i = 0; i < 3; i++)
    {
        printf("enter 1-2-3\n");
        scanf("%d", &user);

        if (user == bot)
        {
            printf("Draw\n");
        }
        else if (user == 1 && bot == 2)
        {
            printf("Sorry paper catches rock :(\n");
            bot_points++;
            user_points--;
        }
        else if (user == 1 && bot == 3)
        {
            printf("Rocks break scissors :)\n");
            user_points++;
            bot_points--;
        }
        else if (user == 2 && bot == 1)
        {
            printf("paper catches rock :)\n");
            user_points++;
            bot_points--;
        }
        else if (user == 2 && bot == 3)
        {
            printf("Sorry scissors cuts paper :(\n");
            bot_points++;
            user_points--;
        }
        else if (user == 3 && bot == 1)
        {
            printf("Sorry Rocks break scissors :(\n");
            bot_points++;
            user_points--;
        }
        else if (user == 3 && bot == 2)
        {
            printf("scissors cuts paper :)\n");
            user_points++;
            bot_points--;
        }
        else
        {
            printf("Byee...... :), Come again");
            break;
        }
    }
    if (user_points>bot_points)
    {
        printf("User score %d, Computer score %d :) user wins",user_points, bot_points );
    }
    else if (user_points<bot_points)
    {
        printf("User score %d, Computer score %d :( Computer wins",user_points, bot_points );
    }
    else if (user_points==bot_points)
    {
        printf("User score %d, Computer score %d its Draw :7",user_points, bot_points );
    }
    
    return 0;
}