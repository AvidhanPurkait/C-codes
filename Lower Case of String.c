#include <stdio.h>
int main()
{
   char s[100];
   int i=0;
   printf("Enter the string: \n");
   gets(s);
   while (s[i] != '\0')
   {
      if (s[i] >= 'A' && s[i] <= 'Z')
      {
         s[i] = s[i] + 32;
      }
      i++;
   }
   printf("The string in lower case: %s\n", s);
   return(0);
}
