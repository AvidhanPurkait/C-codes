#include <stdio.h>
int main()
{
    int n, i, values[100];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    for(i=0;n!=0;i++)
    {
        values[i]=n%2;
        n=n/2;
    }
    printf("Equivalent binary number: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d", values[i]);
    }
    return(0);
}
