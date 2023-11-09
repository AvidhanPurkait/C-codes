#include <stdio.h>
float area(float n);
int main()
{
    int n;
    printf("Enter 1 for area of triangle\n");
    printf("Enter 2 for area of rectangle\n");
    printf("Enter 3 for area of circle\n");
    printf("Enter 4 to Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    if(n==4)
        return(0);
    else
        printf("The area is: %f", area(n));
    return(0);
}
float area(float n)
{
    int radius,length,width,base,height;
    float Area;
    if(n==1)
    {
        printf("Enter the base and the height of the triangle:\n");
        scanf("%d%d",&base,&height);
        Area=(0.5*base*height);
    }
    else
    if(n==2)
    {
        printf("Enter the length and the width of the rectangle:\n");
        scanf("%d%d",&length,&width);
        Area=(length*width);
    }
    else
    if(n==3)
    {
        printf("Enter the radius of the circle:\n");
        scanf("%d",&radius);
        Area=(3.14*radius*radius);
    }
    return(Area);
}
