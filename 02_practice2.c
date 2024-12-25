#include <stdio.h>

void UPPER_lower()
{
    char a;
    printf("Enter a single letter: \n");
    scanf(" %c", &a);
    printf("You enter the letter %c and its ASCII value is %d\n", a,a);
    if (a>= 65 && a<= 90)
    {
        printf("The letter %c is UPPER case", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("The letter %c is lower case", a);
    }
    else
    {
        printf("This is not a letter");
    }
}
void Leap_year()
{
    int year;
    printf("Enter A Year:\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The Enter Year %d is a leap year :)\n", year);
    }
    else
    {
        printf("The Enter Year is not a leap year :(\n");
    }
}
int main(){
    int program;
    printf("You want to run which program: type 0 for Letter check and 1 for leap year and 3 for exit:\n");
    scanf("%d", &program);
    (program==0)?printf("sure, running letter check program....\n"), UPPER_lower():(program==1)?printf("sure, running leap year program....\n"), Leap_year():printf("sure,have a good time :)\n");
    return 0;
}

