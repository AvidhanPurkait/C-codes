#include <stdio.h>
int main()
{
  int values[100],search,i,n;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter %d integer(s):\n", n);
  for(i=0;i<n;i++)
  scanf("%d",&values[i]);
  printf("Enter a number to search:");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(values[i]==search)
    {
      printf("%d is present at location %d\n", search, i+1);
      break;
    }
  }
  if(i==n)
    printf("%d is not present in the values\n", search);
  return(0);
}
