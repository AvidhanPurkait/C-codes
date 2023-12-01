#include<stdio.h>
int main()
{
    int Num;
    printf("Enter a Number: ");
    scanf("%d",&Num);
    if(Num%2==0)
    printf("The Number is even.");
    else
    printf("The Number is odd.");
    return(0);
}
