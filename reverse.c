#include<stdio.h>
int main()
{
  long long num;
  int rem, rev=0;

  printf("Enter your number:");
  scanf("%lld", &num);

  while(num!=0){
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }
  printf("%d", rev);

  return 0;
}
