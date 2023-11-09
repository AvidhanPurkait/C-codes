#include<stdio.h>
int main()
{
     float Perimeter, Area;
     printf("Enter The Perimeter of Square: ");
     scanf("%f", &Perimeter);
     Area = (Perimeter/4)*(Perimeter/4);
     printf("Area of the Square: %f", Area);
     return 0;
}
