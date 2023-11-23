#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c, Discriminant, Root1, Root2, RealPart, ImgPart;
    printf("Enter the Coefficients of a,b,c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    Discriminant = b*b-4*a*c;

    if (Discriminant>0)
    {
    Root1 = (-b+sqrt(Discriminant))/(2*a);
    Root2 = (-b-sqrt(Discriminant))/(2*a);
    printf("Root1 is %.2lf and Root2 is %.2lf", Root1, Root2);
    }
    else
    if (Discriminant==0)
    {
    Root1 = Root2 = -b/(2*a);
    printf("Root1 and Root2 is %.2lf", Root1);
    }
    else
    {
    RealPart = -b/(2*a);
    ImgPart = sqrt(-Discriminant)/(2*a);
    printf("Root1 is %.2lf+%.2lfi and Root2 is %.2f-%.2fi", RealPart, ImgPart, RealPart, ImgPart);
    }
    return(0);
}
