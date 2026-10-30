#include<stdio.h>
int newFunction(int a, int b);
int main()
{
  int n1, n2, sum;
  printf("Enter your two number:");
  scanf("%d %d", &n1, &n2);

  sum = newFunction(n1, n2);
  printf("Sum= %d", sum);
}

int newFunction(int a,int b){
  int result;
  result = a + b;
  return result;
}
