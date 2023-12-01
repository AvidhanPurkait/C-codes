#include<stdio.h>
int main()
{
    int num,i,count,min,max,sum=0;
    printf("Enter min range: ");
    scanf("%d",&min);
    printf("Enter max range: ");
    scanf("%d",&max);
    for(num = min;num<=max;num++)
    {
        count = 0;
        for(i=2;i<=num/2;i++)
        {
           if(num%i==0)
           {
             count++;
             break;
           }
        }
    if(count==0 && num!= 1)
        sum = sum + num;
    }
    printf("Sum of prime numbers is: %d ",sum);

   return 0;
}
