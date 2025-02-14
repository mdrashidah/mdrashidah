#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,r1,r2;

    printf("enter the value of a,b,c\n ");
    scanf("%f\n %f\n %f",&a,&b,&c);

    d=b*b-4*a*c/2*a;

    if (d>0)
    {
        printf("roots are real");

        r1=(b*b-sqrt(d))/(2*a)
        r2=(b*b+sqrt(d))/(2*a)

        printf("the value of r1 is %f",r1);
        printf("the value of r2 is %f",r2);
    }
    else if (d=0)
    {
        /* code */
    }
    
    return 0;
}