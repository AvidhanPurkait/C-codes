#include<stdio.h>
int main()
{
     float Radius, Area;
     printf("Enter The Radius of A Circle: ");
     scanf("%f", &Radius);
     Area = 3.14*Radius*Radius;
     printf("Area of the circle: %f", Area);
     return 0;
}
