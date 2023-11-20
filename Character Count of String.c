#include <stdio.h>
int main()
{
    char s[100];
    int i=0, chr=0;
    printf("Enter the String: ");
    gets(s);
    while (s[i] != '\0')
    {
        chr++;
        i++;
    }
    printf("Number of characters: %d", chr);
    return 0;
}
