#include <stdio.h>
int main()
{
  int values[100],n,i,j,swap;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for (i=0;i<n;i++)
    scanf("%d",&values[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(values[j]>values[j+1])
      {
        swap=values[j];
        values[j]=values[j+1];
        values[j+1]=swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for(i=0;i<n;i++)
     printf("%d\n",values[i]);
  return(0);
}
