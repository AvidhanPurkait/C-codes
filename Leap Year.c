#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if ((year % 400) == 0)
        printf("The Year is Leap Year.\n");
    else if ((year % 100) == 0)
        printf("The Year is not Leap Year.\n");
    else if ((year % 4) == 0)
        printf("The Year is Leap Year.\n");
    else
        printf("The Year is not Leap Year.\n");
    return(0);
}
