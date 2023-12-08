#include<stdio.h>
main()
{
  int i,sum=0,min,max;
  printf("Enter min range: ");
  scanf("%d",&min);
  printf("Enter max range: ");
  scanf("%d",&max);
  for(i=min;i<=max;i++)
  {
    if(i%7==0)
    {
      sum=sum+i;
    }
  }
  printf("The Sum of all the Numbers Divisible by 7 between %d and %d is %d\n",min,max,sum);
  return(0);
}
