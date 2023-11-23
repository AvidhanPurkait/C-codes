#include<stdio.h>
int main()
{
     float Celsius,Fahrenheit;
     printf("Enter The Temperature in Fahrenheit: ");
     scanf("%f",&Fahrenheit);
     Celsius = (Fahrenheit-32)*5/9;
     printf("The Temperature in Celsius is %f",Celsius);
     return 0;
}
