#include<stdio.h>
int main()
{
    int Num;
    printf("Enter a Number: ");
    scanf("%d",&Num);
    (Num%2==0)? printf("The Number is even."): printf("The Number is odd.");
    return(0);
}
