#include <stdio.h>
int main()
{
  char s[1000], d[1000];
  int i = 0;
  printf("Enter a string to copy\n");
  gets(s);
  while (s[i] != '\0') {
    d[i] = s[i];
    i++;
  }
  d[i] = '\0';
  printf("After copying, the string: %s\n", d);
  return(0);
}
