#include<stdio.h>
int main()
{
    int Age;
    printf("Enter the Age: ");
    scanf("%d",&Age);
    (Age>=18)? printf("You are eligible for voting."): printf("You are not eligible for voting.");
    return(0);
}
