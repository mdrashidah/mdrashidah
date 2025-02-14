#include <stdio.h>
#include <math.h>

int main()
{
    printf("This program is to divide the matrix\n");
    int a[2][3], b[2][3], div[2][3], i,j;
printf("enter the value of 1st matrix: \n");
    for(i=0;i<2;i++)
    {
        for (j = 0;j<3; j++)
        {
            scanf("%d", &a[i][j]);
            //printf("\t");
        }
        }
printf("enter the value of 2nd matrix: \n");
    for(i=0;i<2;i++)
    {
        for (j = 0;j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            //printf("\t");
        }
        }
        printf("matrix a is \n");
        for(i=0;i<2;i++)
    {
        for (j = 0;j < 3; j++)
        {
    

    printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n matrix b is \n");
    for(i=0;i<2;i++)
    {
        for (j = 0;j < 3; j++)
        {
    

    printf("%d\t", b[i][j] );
        }
        printf("\n");
    }
    printf(" \n the value of matrix c is \n");
    for(i=0;i<2;i++)
    {
        for (j = 0;j < 3; j++)
        {
            div[i][j] = ( a[i][j] )/( b[i][j] );
            printf("%d\t", div[i][j]);
            
        }
        printf("\n");
        }
return 0;
}
