#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,GCD,LCM;
    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);
    GCD = gcd(a, b);
    LCM = (a*b)/GCD;
    printf("GCD of %ld and %ld is %ld\n", a, b, GCD);
    printf("LCM of %ld and %ld is %ld\n", a, b, LCM);
    return(0);
}
int gcd(int a,int b)
{
    if (a==0)
    {
        return(b);
    }
    while(b>0)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return(a);
}
