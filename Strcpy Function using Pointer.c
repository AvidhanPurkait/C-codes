#include<stdio.h>
int strcpy(char *str2, char *str1)
{
  while(*(str2++) = *(str1++));
}
int main()
{
    char str1[100], str2[100];
    printf("Enter the string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("First string: %s\n", str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
