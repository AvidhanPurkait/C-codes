#include <stdio.h>
int main()
{
    int i,j,Rows;
    printf("Enter number of rows : ");
    scanf("%d",&Rows);
    for(i=1; i<=Rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(Rows*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
