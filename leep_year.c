#include<stdio.h>
int main()
{
  int year;
  char result;

  printf("Enter your year:");
  scanf("%d", &year);

  if(year%400 == 0){
    printf("%d is Leep year", year);
  }else if(year%100 == 0){
    printf("%d is not Leep year");
  }else if(year%4==0){
    printf("%d is Leep year", year);
  }
  else{
    printf("%d is not Leep year", year);
  }

  return 0;
}
