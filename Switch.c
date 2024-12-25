#include <stdio.h>
// switch-case is used when we have to make a choice between number of alternatives for a given variable.
int main()
{
    int choice;

    // Asking the user for input
    printf("Enter a number between 1 and 5 to represent a day of the week:\n");
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n");
    scanf("%d", &choice);

    // Using switch statement to print the day
    switch (choice)
    {
    case 1:
        printf("It's Monday\n");
        break;
    case 2:
        printf("It's Tuesday\n");
        break;
    case 3:
        printf("It's Wednesday\n");
        break;
    case 4:
        printf("It's Thursday\n");
        break;
    case 5:
        printf("It's Friday\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 5.\n");
    }

    return 0;
}
