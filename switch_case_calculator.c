#include<stdio.h>

int main()
{
    int days;
    printf("no. of days in week");
    scanf("%d", &days);

    switch (days)
    {
    case 1:
    printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
    
    default:
    printf("invalid day");
        break;
    }
}