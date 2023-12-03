#include<stdio.h>
int main()
{
    char string[1000], reverse[1000];
    char *s = string;
    char *r = reverse;
    int i = 0;
    printf("Enter the string: \n");
    gets(string);
    while(*(s++)!='\0')
        i++;
        s--;
    while(i>=0)
    {
        *(r++) = *(--s);
        i--;
    }
    *r = '\0';
    printf("The Reversed String is: \n%s",reverse);
    return(0);
}
