#include <stdio.h>
int main()
{
   int i,j,Rows,k=1;
   printf("Enter number of Rows : ");
   scanf("%d",&Rows);
   for(i=1;i<=Rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf(" %d ",k++);
	printf("\n");
   }
    return(0);
}
