#include <stdio.h>

int main() {
    int a[6][6], b[6][6], add[6][6], i, j;

    printf("enter the value of 1st matix : \n ");
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            
            scanf("%d\t", &a[i][j]);
        }
    printf("\n");    
    }
    printf("enter the value of 2nd matix : \n ");
    for ( i = 0; i < 6; i++)
    {
        for (j =0; j < 6; j++)
        {
            
            scanf("%d\t", &b[i][j]);
        }
    printf("\n");
    }
    printf("the value of 1st matix : \n");
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    } 
    printf("the value of 2nd matix : \n");   
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }    
    printf("multiple of matix : \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
        add[i][j] = a[i][j] + b[i][j];
            
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
    return 0;
}