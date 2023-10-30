#include<stdio.h>
int main()
{
    int i,N,F=1,Sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&N);
    for (i=1; i<=N; i++)
    {
        F = F*i;
        Sum=Sum+F;
    }
    printf("The Sum of the series is: %d",Sum);
    return(0);
}
