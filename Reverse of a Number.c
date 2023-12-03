#include<stdio.h>
int main()
{
    int i,num,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num; i>0; i=i/10)
    {
        reverse = (reverse*10) + (i%10);
    }
    printf("Reverse = %d", reverse);
    return(0);
}
