#include <stdio.h>
#include <stdlib.h>
int main()
{
    char data[1000];
    int i=0,word=0,chr=0,line=0;
    FILE * fPtr;
    fPtr = fopen("abc.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
    printf("Enter contents to store in file : \n\n");
    fgets(data, 1000, stdin);
    fprintf(fPtr,"%s",data);
    fclose(fPtr);
    printf("\nFile created and saved successfully. \n");
    while (data[i] != '\0')
    {
        if(data[i]==' '||data[i]=='\n')
        {
            word++;
        }
        else
        if(data[i]=='.')
        {
            line++;
        }
        else
        {
            chr++;
        }
        i++;
    }
    printf("\nThe number of words in the file are: %d\n",word);
    printf("\nThe number of characters in the file are: %d\n",chr);
    printf("\nThe number of lines in the file are: %d\n",line);
    fclose(fPtr);
    return(0);
}
