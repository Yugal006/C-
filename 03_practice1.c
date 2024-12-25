#include<stdio.h>

int main(){
    int store, sum = 0;
    for (int i = 1; i<=10; i++)
    {
        store =8*i;
        printf("%d\n", store);
        sum += store;
    }
    printf("the total is: %d", sum);
    return 0;
}