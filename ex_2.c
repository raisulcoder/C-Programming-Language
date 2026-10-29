//Inpur number and check factor
#include<stdio.h>
int main()
{
  int num, i,sum=0;

  printf("Enter your number:");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    sum = sum + i;
  }
  printf("Factor: %d", sum);

  return 0;
}