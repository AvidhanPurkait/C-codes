#include <stdio.h>
int main()
{
    int n,m,i,j,p,choice,pos,a[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d numbers\n", n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The entered array is: \n");
    for (i=0;i<n;i++)
    printf ("%d  ",a[i]);
    while(1)
    {
    printf("\nEnter your choice\n");
    printf("Case1 -> Insert an Element in an Array\n");
    printf("Case2 -> Delete an Element in an Array\n");
    printf("Give your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter the element to insert: \n");
        scanf("%d",&m);
        printf("Enter a position to insert an element %d\n",m);
        scanf("%d",&pos);
        pos--;
        for(i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=m;
        printf("The array after Insertion: ");
        for(i=0;i<n+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    case 2:
        printf("\nEnter the element to delete\n");
        scanf("%d",&p);
        for(i=0;i<n;i++)
        {
            if(a[i]==p)
            {
                for(j=i;j<(n-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("The array after deletion\n");
        for(i=0;i<(n-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    default:
        printf("Wrong choice, Please try again later");
    }}
    return 0;
}
