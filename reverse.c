#include<stdio.h>
int main()
{
  long long num;
  int rem, rev;

  printf("Enter your number:");
  scanf("%lld", &num);

  while(num!=0){
    rem = num % 10;
    rev = rev * 10 + rem;
  }
  printf("%d", rev);

  return 0;
}