#include <stdio.h>

int main()
{
    int n = 251320435;
    int trigger = 0;
    if (n == 0 || n == 1)
    {
        trigger = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n!= 2)
            {
                trigger = 1;
                break;
            }
        }
    }

    if (trigger)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }

    return 0;
}