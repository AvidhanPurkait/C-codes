#include<stdio.h>
int main()
{
    int num,i,a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num; i>0; i=i/10)
    {
         a=i%10;
         sum=sum+(a*a*a);
    }
    if(sum==num)
         printf("%d is an Armstrong number.\n",num);
    else
         printf("%d is not an Armstrong number.\n",num);
    return(0);
}
