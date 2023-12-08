#include<stdio.h>
int main ()
{
   int num1,num2;
   printf("Enter The First Number: ");
   scanf("%d", &num1);
   printf("Enter The Second Number: ");
   scanf("%d", &num2);
   num1=num1+num2;
   num2=num1-num2;
   num1=num1-num2;
   printf("The 1st number after swapping:%d\n",num1);
   printf("The 2nd number after swapping:%d",num2);
   return 0;
}
