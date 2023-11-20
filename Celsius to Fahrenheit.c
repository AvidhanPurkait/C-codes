#include<stdio.h>
int main()
{
     float Celsius,Fahrenheit;
     printf("Enter The Temperature in Celsius: ");
     scanf("%f",&Celsius);
     Fahrenheit = (9.0/5.0*Celsius)+32;
     printf("The Temperature in Fahrenheit is %f",Fahrenheit);
     return 0;
}
