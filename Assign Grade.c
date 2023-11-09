#include<stdio.h>
int main()
{
    int Sum,Average,Num1,Num2,Num3,Num4,Num5;
    printf("Enter the marks of five subjects:\n");
    scanf("%d %d %d %d %d",&Num1,&Num2,&Num3,&Num4,&Num5);
    Sum = Num1+Num2+Num3+Num4+Num5;
    printf("The Sum is: %d\n", Sum);
    Average = Sum/5;
    printf("The Average is: %d\n", Average);
    if ((Average>=90)&&(Average<=100))
        printf("The Grade is: O");
    else
    if ((Average>=80)&&(Average<=89))
        printf("The Grade is: E");
    else
    if ((Average>=70)&&(Average<=79))
        printf("The Grade is: A");
    else
    if ((Average>=60)&&(Average<=69))
        printf("The Grade is: B");
    else
    if ((Average>=50)&&(Average<=59))
        printf("The Grade is: C");
    else
    if ((Average>=40)&&(Average<=49))
        printf("The Grade is: D");
    else
        printf("The Grade is: FAIL");
    return(0);
    }
