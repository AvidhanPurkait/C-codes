#include <stdio.h>
int main()
{
    int i,num,oddSum=0,evenSum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
            evenSum=evenSum+i;
        else
            oddSum=oddSum+i;
    }
    printf("Sum of all odd numbers are: %d",oddSum);
    printf("\nSum of all even numbers are: %d",evenSum);
    return 0;
}
