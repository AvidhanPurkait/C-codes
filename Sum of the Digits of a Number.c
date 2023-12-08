#include <stdio.h>
int main()
{
    int i,num,Sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i!=0;i/=10)
        Sum=Sum+i%10;
    printf("Sum of digits is: %d",Sum);
    return(0);
}
