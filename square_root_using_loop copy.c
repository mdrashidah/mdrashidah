#include <stdio.h>

int main(){
    int num, i;
    printf("calculator for finding square of a number \n \n");
    
    printf("enter the number do wish to find square \n");
    scanf("%d", &num);
    
    for (i = 1; i * i < num; i++);
    
    //i--; // Adjust i to be the integer part of the square root
    i=i*i;
    printf("the square root of the entered number is %d\n", i);
    
    return 0;
}
