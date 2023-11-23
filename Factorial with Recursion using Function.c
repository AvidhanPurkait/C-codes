#include<stdio.h>
int fact(int num);
int main()
{
    int num,F;
    printf("Enter any number: ");
    scanf("%d", &num);
    F = fact(num);
    printf("Factorial of %d is %d", num, F);
    return(0);
}
int fact(int num)
{
    if(num == 0)
        return(1);
    else
        return(num * fact(num - 1));
}
