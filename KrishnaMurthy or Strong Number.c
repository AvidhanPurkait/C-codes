#include<stdio.h>
int main()
{
    int num,i,a,F,j,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num; i>0; i=i/10)
    {
        a=i%10;
        F=1;
        for (j=1; j<=a; j++)
        {
            F = F*j;
        }
        sum = sum+F;
    }
    if(sum==num)
         printf("%d is a  Krishna Murthy/Strong number.\n",num);
    else
         printf("%d is not a  Krishna Murthy/Strong number.\n",num);
    return(0);
}
