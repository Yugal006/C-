#include<stdio.h>
/*
this 
is 
multi line comment
*/
int main(){
    int a = 10 ;
    int b = 11.5;
    float c = 13.5;
    char d = '&';
    float e = 145.6357;
    float f = 222;
    int g;
    printf("%d\n", a);
    // printf("%f\n", a); -------->>>-1.#QNAN0
    printf("%f\n", (float)a);
    printf("%d\n", b);
    // printf("%f\n", b); -------->>>-1.#QNAN0
    printf("%f\n", (float)b); //still it will lose its fraction part
    printf("%d\n", c);
    printf("%f\n", c);
    printf("%d\n", f);
    printf("%f\n", f);
    printf("%c\n", d);
    // printf("Size of int: %zu bytes\n", sizeof(int));
    // printf("Size of float: %zu bytes\n", sizeof(float));
    // printf("Size of char: %zu byte\n", sizeof(char));
    g = (int) e;
    printf("%d", g);
    return 0;
}

