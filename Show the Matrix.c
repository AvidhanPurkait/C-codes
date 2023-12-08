#include <stdio.h>
int main()
{
    int m,n,i,j,matrix[10][10];
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of the Matrix: \n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&matrix[i][j]);
    printf("The Matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",matrix[i][j]);
        printf("\n");
    }
    return(0);
}
