#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The Sum of the series is: %d",fact(n));
    return(0);
}
int fact(int n)
{
    int i,F=1,Sum=0;
    for(i=1;i<=n;i++)
    {
        F=F*i;
        Sum=Sum+F;
    }
    return(Sum);
}
