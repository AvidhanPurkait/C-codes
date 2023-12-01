#include <stdio.h>
int max(int[], int n);
int main()
{
    int i, values[100], n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &values[i]);
    }
    printf("Maximum number = %d\n", max(values, n));
    return(0);
}
int max(int values[], int n)
{
    int j, max = values[0];
    for (j=1;j<n;j++)
    {
        if(values[j] > max)
        {
            max = values[j];
        }
    }
    return(max);
}
