#include <stdio.h>
int main()
{
  int num, i,result;

  printf("Enter your Number:");
  scanf("%d", &num);

  for (i = 1; i <= num;i++){
    if(num%i==0){
      printf("%d\n", i);
    }
  }
}
