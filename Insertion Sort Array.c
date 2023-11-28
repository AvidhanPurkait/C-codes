#include <stdio.h>
int main()
{
  int n,values[1000],i,j,k,flag=0;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for(i=0;i<n;i++)
    scanf("%d",&values[i]);
  for (i=1;i<=n-1;i++)
  {
    k=values[i];
    for(j=i-1;j>=0;j--)
    {
      if(values[j]>k)
      {
        values[j+1]=values[j];
        flag=1;
      }
      else
        break;
    }
    if(flag)
      values[j+1]=k;
  }
  printf("Sorted list in ascending order:\n");
  for(i=0;i<=n-1;i++)
  {
    printf("%d\n",values[i]);
  }
  return(0);
}
