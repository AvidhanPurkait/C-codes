#include<stdio.h>
int main()
{
    int i, n, values[100];
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    values[0]=0;
    values[1]=1;
    for(i=2;i<=n;i++)
    {
        values[i] = values[i-1] + values[i-2];
    }
    printf("The Fibonacci series up to %d terms: \n",n);
    for(i=0;i<n;i++)
    printf("%4d ",values[i]);
    return(0);
}
