#include<stdio.h>
int main()
{
  int i, N, F=1;
  printf("Enter the number: ");
  scanf("%d", &N);
  for (i=1; i<=N; i++)
  F = F*i;
  printf("Factorial of %d is: %d", N, F);
  return(0);
}
