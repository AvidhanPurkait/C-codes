#include<stdio.h>
int main()
{
    float sum=0,j=1;
    int i,num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/j);
        j=j*2;
    }
    printf("The Sum of the series is: %f",sum);
    return(0);
}
