#include <stdio.h>
void swap(int*, int*);
int main()
{
   int num1, num2;
   printf("Enter The 1st Number: ");
   scanf("%d", &num1);
   printf("Enter The 2nd Number: ");
   scanf("%d", &num2);
   swap(&num1,&num2);
   printf("The 1st number after swapping: %d\n",num1);
   printf("The 2nd number after swapping: %d",num2);
   return(0);
}
void swap(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;
}
