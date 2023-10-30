#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum=sum+i;
    printf("The Sum of the series is: %d",sum);
    return(0);
}
