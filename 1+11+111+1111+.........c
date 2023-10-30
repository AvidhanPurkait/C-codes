#include<stdio.h>
int main()
{
    int n,i,Sum=0,j=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        Sum=Sum+j;
        j=(j*10)+1;
    }
    printf("The Sum of the series is: %d",Sum);
    return(0);
}
