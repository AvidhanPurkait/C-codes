#include<stdio.h>
int main()
{
 	int m, n, i, j, a[10][10], Sum = 0;
 	printf("Please Enter Number of rows and columns: \n");
 	scanf("%d %d", &m, &n);
 	printf("Please Enter the Matrix Elements \n");
 	for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
 	for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
    		if(i>j)
    		{
    			Sum = Sum + a[i][j];
			}
   	 	}
  	}
    printf("The Sum of Lower Triangle Matrix = %d", Sum);
 	return(0);
}
