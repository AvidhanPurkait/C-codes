#include<stdio.h>
void symmetric(int[5][5],int);
void main()
{
    int a[5][5],R,C,i,j;
    printf("Enter the number of Rows in the Matrix: ");
    scanf("%d",&R);
    printf("Enter the number of Columns in the Matrix: ");
    scanf("%d",&C);
    while(R!=C);
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
    symmetric(a,R);
}
void symmetric(int A[5][5],int n)
{
    int i,j,B[5][5];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                printf("The Matrix is not Symmetric\n");
                return;
            }
        B[j][i]=A[i][j];
        }
    }
    printf("The Matrix is symmetric\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
}
