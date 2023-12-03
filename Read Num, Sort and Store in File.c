#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j,n=0,swap,arr[1000];
	char str;
	FILE * fPtr;
	fPtr = fopen("abc.txt", "r");
	if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
    printf("The numbers of the file are: \n");
	str = fgetc(fPtr);
	while (str != EOF)
    {
        printf ("%c", str);
        str = fgetc(fPtr);
    }
    fPtr = fopen("abc.txt", "r");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
	while (fscanf(fPtr, "%d", &arr[i])==1)
	{
		n++;
		i++;
	}
	for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    printf("\n\nSorted list in ascending order:\n");
	for (i = 0; i < n; i++)
    {
		printf("%d ", arr[i]);
    }
    fPtr = fopen ("abc.txt", "w");
    for(i=0;i<n;i++)
    {
        fprintf(fPtr,"%d ",arr[i]);
    }
    fclose(fPtr);
    printf("\n\nFile overwritten and saved successfully. \n");
	return(0);
}
