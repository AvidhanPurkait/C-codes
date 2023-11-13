#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=1,values[100],sum=0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    for(i=0;n!=0;i++)
    {
        values[i]=n%10;
        n=n/10;
    }
    for(i=i-1;i>=0;i--)
    {
        sum=sum+(values[i]*(pow(2, i)));
    }
    printf("Equivalent decimal number: %d",sum);
    return(0);
}
