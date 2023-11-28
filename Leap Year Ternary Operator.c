#include<stdio.h>
int main()
{
    int Year;
    printf("Enter the Year: ");
    scanf("%d",&Year);
    ((Year%4==0)&&(Year%100!=0))? printf("The Year is Leap Year."):(Year%400==0)? printf("The Year is Leap Year."):printf("The Year is not Leap Year.");
    return(0);
}
