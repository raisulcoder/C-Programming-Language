#include<stdio.h>
int main()
{
  int n1, n2, next =0 , n;
  
  printf("Enter number of term:");
  scanf("%d", &n);
  
  printf("Enter first and second number:");
  scanf("%d %d", &n1, &n2);
  
  printf("Fibonacci: %d %d ", n1, n2);
  next = n1 + n2;
  
  while(next<=n){
      printf("%d ", next);
    n1 = n2;
    n2 = next;
    next = n1 + n2;
  }
  
  return 0;
}