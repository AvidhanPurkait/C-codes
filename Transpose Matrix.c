#include<stdio.h>
void transpose(int[5][5],int,int);
void main()
{
    int a[5][5],R,C,i,j;
    printf("Enter the number of Rows in the Matrix: ");
    scanf("%d",&R);
    printf("Enter the number of Columns in the Matrix: ");
    scanf("%d",&C);
    printf("Enter the Matrix: \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is: \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    transpose(a,R,C);
}
void transpose(int A[5][5],int r,int c)
{
    int i,j,k=0,T[5][5],col=0;
    for(i=0;i<r;i++)
    {
        k=0;
        for(j=0;j<c;j++)
        {
            T[k][col]=A[i][j];
            k++;
        }
        col++;
    }
    printf("Transpose of the matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
}
