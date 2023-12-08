#include <stdio.h>
int strcmp(char * str1, char * str2)
{
    while((*str1 && *str2) && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return(*str1 - *str2);
}
int main()
{
    char str1[100], str2[100];
    int compare;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    compare = strcmp(str1, str2);

    if(compare == 0)
    {
        printf("The strings are equal.");
    }
    else
        printf("The strings are not equal.");
    return 0;
}
