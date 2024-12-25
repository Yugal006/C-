#include<stdio.h>

int main(){
    int mrk1, mrk2, mrk3;
    printf("Enter a marks of First Subject:\n");
    scanf("%d", &mrk1);
    printf("Enter a marks of Second Subject:\n");
    scanf("%d", &mrk2);
    printf("Enter a marks of Third Subject:\n");
    scanf("%d", &mrk3);
    if (mrk1+mrk2+mrk3 >=40 && mrk1>=33 && mrk2>=33 && mrk3>=33)
    {
        printf("You are Pass Congo:)\n");
    }
    else{
        printf("You are fail :(\n");
    }
    return 0;
}