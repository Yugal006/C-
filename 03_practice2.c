#include<stdio.h>

int main(){
    int product = 1, n = 0, i = 0;
    // for (int i = 0; i<n; i++)
    // {
    //     product *= (n-i); 
    // }
    while (i<n)
    {
        product *= (n-i); 
        i++;
    }
    printf("the total is: %d", product);
    return 0;
} 