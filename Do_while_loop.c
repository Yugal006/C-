//when code generate random value those value/number are called garbage value
#include<stdio.h>

int main(){
    int i, a;
    i = 1;
    printf("Table of which no. you want to generate: \n");
    scanf("%d", &a);
    printf("here is your table of %d:\n", a);
    do
    {
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    } while (i<=10);
    
    printf("");
    return 0;
}