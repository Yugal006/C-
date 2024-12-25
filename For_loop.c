#include<stdio.h>

int main(){
    int a;
    printf("Enter a number to find odd or even but in revers order:\n");
    scanf("%d", &a);
    for (int i = a; i>0; i--)
    {
        if (i%2==0)
        {
            printf("even: %d\n", i);
        }        
        else if(i%2!=0){
            // printf("odd: %d\n", i);
            continue; // skips the rest of the loop body
        }
        else{
            printf("Exiting :)\n");
            break; // exit imidiatly from the loop
        }     
    }
    
    printf("done!, byee byee.... :)");
    return 0;
}