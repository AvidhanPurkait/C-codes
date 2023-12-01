#include <stdio.h>
int fact(int j);
int main()
{
    int i,j,k,num,term;
    printf("Enter number of rows : ");
    scanf("%d", &num);
    for(j=0; j<num; j++)
    {
        for(i=j; i<=num; i++)
            printf("%2c", ' ');
        for(k=0; k<=j; k++)
        {
            term = fact(j)/(fact(k)*fact(j-k));
            printf("%4d", term);
        }
        printf("\n");
    }
    return(0);
}
int fact(int j)
{
    int factorial=1;
    while(j>=1)
    {
        factorial= factorial*j;
        j--;
    }
    return(factorial);
}
