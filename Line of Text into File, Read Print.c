#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str,data[1000];
    FILE * fPtr;
    fPtr = fopen("xyz.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, 1000, stdin);
    fprintf(fPtr,"%s",data);
    fclose(fPtr);
    printf("\nFile created and saved successfully. \n");
    fPtr = fopen("xyz.txt", "r");
    printf("\nThe content of the file is: \n");
	str = fgetc(fPtr);
	while (str != EOF)
    {
        printf ("%c", str);
        str = fgetc(fPtr);
    }
    return(0);
}
