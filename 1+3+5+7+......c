#include<stdio.h>
int main()
{
    int i,num,sum=0,j=2;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum=sum+(2*i-1);
    printf("The Sum of the series is: %d",sum);
    return(0);
}
