#include<stdio.h>
void swap(int*x,int*y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void bubble_sort(int x[],int n)
{
    int i,j;
    for(i=n-1;i>0;i--)
    for(j=0;j<i;j++)
    if(x[j]>x[j+1])
        swap(&x[j],&x[j+1]);
}
