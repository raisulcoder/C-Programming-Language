#include<stdio.h>
int main ()
{
  int num,i,fac =1;
  printf("Enter your number and check factorial number:");
  scanf("%d", &num);
  
  for (i = 1; i <= num; i++){
    fac = fac * i;
  }
  printf(" %d" , fac);

    return 0;
}