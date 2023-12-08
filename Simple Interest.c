#include<stdio.h>
int main()
{
    float P,N,R,S;
    printf("Enter Principle Amount: ");
    scanf("%f",&P);
    printf("Enter %% Annual Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter Time in Years: ");
    scanf("%f",&N);
    S=((P*R*N)/100);
    printf("Simple interest is: %f",S);
    return 0;
}
