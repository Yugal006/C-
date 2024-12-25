#include<stdio.h>

int main(){
    int age;
    int license;
    int run;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age>18 && age<85)
    {   
        printf("Do you have driving license type 0 if yes and 1 if no?\n");
        scanf("%d", &license);
        if (license == 0)
        {
            printf("You can drive\n");
        }
        else
        {
            printf("get your license first then you can drive\n");
        }
                  
    }
    else if (age == 18)
    {
        printf("Ummm..so your age is %d you can't drive untill you 19+\n", age);
    }
    else if (age>85 && age<100 || age ==85)
    {
        printf("Ummm..so your age is %d you can't drive sir you are senior citizen\n", age);
    }
    else if (age>100)
    {
        printf("Ummm..so your age is %d you :/ your not human\n", age);
    }
    else
    {   
        printf("you can't drive :(\n");
    }
    printf("Do you want to run the program again: type 0 if yes and 1 if no:\n");
        scanf("%d", &run);
        // if (run == 0)
        // {
        //     printf("sure :)\n");
        //     main();
        // }
        // else
        // {
        //     printf("sure,have a good time:)\n");
        // }
        run==0?printf("sure :)\n"), main():printf("sure,have a good time :)\n"); 

        //condition ? expression-if-true : expression-if-false
        // Here "?" and ":" are called Ternary Operators
        
    return 0;
}