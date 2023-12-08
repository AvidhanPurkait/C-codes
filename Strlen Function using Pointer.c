#include<stdio.h>
int strlen(char *str)
{
  int count = 0;
  while(*str != '\0')
  {
      count++;
      str++;
  }
  return count;
}
int main()
{
    char str[100];
    int length;
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);
    printf("Length of '%s' is %d", str, length);
    return 0;
}
