#include<stdio.h>
int main()
{
    int n,base=1,rem,binary_num,decimal_num=0;
 	printf("Enter A Binary Number: ");
    scanf("%d",&n);
    binary_num = n;
    while(n>0)
    {
        rem = n%10;
        decimal_num = decimal_num+rem*base;
        n = n/10 ;
        base = base*2;
    }
    printf("\nEquivalent Decimal Number: %d\n",decimal_num);
    return(0);
}
