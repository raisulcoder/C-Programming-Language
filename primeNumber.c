#include<stdio.h>
int main()
{
  int num, result=0;

  printf("Enter your possitive integer:");
  scanf("%d", &num);

  if(num==0 || num==1){
    result = 1;
  }
  for (int i = 2; i <= num / 2;i++){
    if(num%i==0){
      result = 1;
      break;
    }
  }
  if(result==1){
    printf("%d Your Number isn't prime number.",num);
  }else{
    printf("%d Your number is Prime number",num);
  }

    return 0;
}