#include<stdio.h>
void sparse(int[5][5],int,int);
int count(int[5][5],int,int);
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
    sparse(a,R,C);
}
void sparse(int A[5][5],int r,int c)
{
    int i,j,k,sp[10][3],non_zero_element;
    non_zero_element=count(A,r,c);
    if(non_zero_element>((r*c)/2))
    {
        printf("It is not a Sparse Matrix\n");
        return;
    }
    else
        printf("It is a Sparse Matrix\n");
    i=0;
    sp[i][0]=r;
    sp[i][1]=c;
    sp[i][2]=non_zero_element;
    i++;
    for(k=0;k<r;k++)
    {
        for(j=0;j<c;j++)
        {
            if(A[k][j]!=0)
            {
                sp[i][0]=k;
                sp[i][1]=j;
                sp[i][2]=A[k][j];
                i++;
            }
        }
    }
    printf("The 3 Tuple Form of the Matrix is: \n");
    for(i=0;i<(non_zero_element+1);i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sp[i][j]);
        }
        printf("\n");
    }
}
int count(int A[5][5],int r,int c)
{
    int non_zero_element=0,i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(A[i][j]!=0)
                non_zero_element++;
        }
    }
    printf("The Number of Non Zero Element is: %d\n",non_zero_element);
    return non_zero_element;
}










