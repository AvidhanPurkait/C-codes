#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three different numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    ((a<b)&&(a<c))? printf("the smallest number is %d", a): (b<c)? printf("the smallest number is %d", b): printf("the smallest number is %d", c);
    return(0);
}
