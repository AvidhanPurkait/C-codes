#include <stdio.h>
int main()
{
    char s[100], r[100];
    int i,j,count = 0;
    printf("Input a string: \n");
    gets(s);
    while (s[count] != '\0')
        count++;
    j = count - 1;
    for (i = 0; i < count; i++)
    {
        r[i] = s[j];
        j--;
    }
    r[i] = '\0';
    printf("The Reversed String is: \n%s", r);
    return 0;
}
