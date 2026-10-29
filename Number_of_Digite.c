#include<stdio.h>
int main()
{
  long long num;
  int count=0;

  printf("Enter your number:");
  scanf("%lld", &num);

  do{
    num /=10;
    ++count;
  } 
  while (num != 0);

  printf("%d", count);

  return 0;
}