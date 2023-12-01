#include <stdio.h>
int main()
{
    int i, max, min, n, values[100];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &values[i]);
    }
    max = values[0];
    min = values[0];
    for(i=1; i<n; i++)
    {
        if(values[i] > max)
        {
            max = values[i];
        }
        if(values[i] < min)
        {
            min = values[i];
        }
    }
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d", min);
    return(0);
}
