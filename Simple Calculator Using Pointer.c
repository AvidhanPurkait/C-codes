#include <stdio.h>
int main()
{
    float num1, num2;
    float *p1, *p2;
    float sum, sub, mult, div;
    p1 = &num1;
    p2 = &num2;
    printf("Enter The First Number: ");
    scanf("%f", p1);
    printf("Enter The Second Number: ");
    scanf("%f", p2);
    sum  = (*p1) + (*p2);
    sub = (*p1) - (*p2);
    mult = (*p1) * (*p2);
    div  = (*p1) / (*p2);
    printf("The Addition is %f\n", sum);
    printf("The Subtraction is %f\n", sub);
    printf("The Multiplication is %f\n", mult);
    printf("The Division is %f\n", div);
    return(0);
}
