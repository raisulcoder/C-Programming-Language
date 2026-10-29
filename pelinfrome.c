#include<stdio.h>
int main()
{
  int num, rem, rev=0, original;

  printf("Enter your number:");
  scanf("%d", &num);

  original = num;

  while(num!=0){
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
  }

  if (rev==original)
  {
    printf("Your number is pelindrome");
  }else{
    printf("Your number isn't Pelindrome");  }
  

  return 0;
}