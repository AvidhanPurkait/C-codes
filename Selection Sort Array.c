#include <stdio.h>
int main()
{
  int values[100],n,i,j,k,position;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for(i=0;i<n;i++)
    scanf("%d",&values[i]);
  for(i=0;i<n-1;i++)
  {
    position=i;
    for(j=i+1;j<n;j++)
    {
      if(values[position]>values[j])
        position=j;
    }
    if(position!=i)
    {
      k=values[i];
      values[i]=values[position];
      values[position]=k;
    }
  }
  printf("Sorted list in ascending order:\n");
  for(i=0;i<n;i++)
    printf("%d\n",values[i]);
  return(0);
}
