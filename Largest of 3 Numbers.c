#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three different numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b)&&(a>c))
        printf("the largest number is %d", a);
    else
    if (b>c)
        printf("the largest number is %d", b);
    else
        printf("the largest number is %d", c);
    return(0);
}
