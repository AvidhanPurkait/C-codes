#include<stdio.h>
int strcat(char *str1, char *str2)
{
    while(*(++str1));
    {
        while(*(str1++) = *(str2++));
    }
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string = %s", str1);
    return 0;
}
