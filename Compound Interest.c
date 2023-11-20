#include<stdio.h>
#include<math.h>
int main()
{
    float P,N,R,C;
    printf("Enter Principle Amount: ");
    scanf("%f",&P);
    printf("Enter %% Annual Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter Time in Years: ");
    scanf("%f",&N);
    C=P*(pow((1+R/100),N))-P;
    printf("Compound interest is: %f",C);
    return 0;
}
