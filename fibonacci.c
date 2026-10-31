#include<stdio.h>
int main()
{
  int n1, n2, next=0, n,i;
  
  printf("Enter Number of terms:");
  scanf("%d", &n);
  
  printf("Enter first number and second number:");
  scanf("%d %d", &n1, &n2);
  
  printf("Fibonaaci:%d %d", n1, n2);
  
  next = n1 + n2;
  for (i = 3; i <= n;i++){
    printf(" %d", next);
    n1 = n2;
    n2 = next;
    next = n1 + n2;
  }

  return 0;
}
