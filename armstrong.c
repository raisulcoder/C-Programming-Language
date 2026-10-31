#include <stdio.h>
#include<math.h>
int main()
{
  int num, original, rem, result = 0,digit=0;
  jump:
  printf("Enter your number:");
  scanf("%d",&num);
if(num==0){
  printf("!Please enter the possitive number.\n");
  goto jump;
}
  original = num;

  while(num != 0){
    num /= 10;
    digit++;
  }

  num = original;

  while(num !=0){
    rem = num % 10;
    result = result + (int)(pow(rem, digit) + 0.5);
    num /= 10;
  }
 if(result== original){
   printf("Your number is Armstrong,");
  }else{
    printf("Your number isn't Armstrong,");
 }

 return 0;
}
