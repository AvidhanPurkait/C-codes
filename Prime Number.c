#include <stdio.h>
int main()
{
   int i, num, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("%d is a prime number.",num);
   }
   else
   {
      printf("%d is not a prime number.",num);
   }
   return(0);
}
