#include <stdio.h>
int main()
{
    int i,N,a=0,b=1,c;
    printf("Enter the number of terms: ");
    scanf("%d",&N);
    printf("The Fibonacci series up to %d terms: \n",N);
    printf("%4d",b);
    for(i=2;i<=N;i++)
    {
        c=a+b;
        printf("%4d",c);
        a=b;
        b=c;
    }
    return(0);
}
