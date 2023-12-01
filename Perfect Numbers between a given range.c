#include <stdio.h>
int main()
{
    int num,i,min,max,sum;
    printf("Enter min range: ");
    scanf("%d", &min);
    printf("Enter max range: ");
    scanf("%d", &max);
    printf("The Perfect numbers between %d to %d: \n", min, max);
    for(num=min; num<=max; num++)
    {
        sum = 0;
        for(i=1; i<num; i++)
        {
            if(num%i == 0)
            {
                sum =sum+i;
            }
        }
            if(sum == num)
        {
            printf("%d, ", num);
        }
    }
    return(0);
}
