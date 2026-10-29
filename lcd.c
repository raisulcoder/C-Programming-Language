#include<stdio.h>
int main()
{
  int n1, n2, gcd, lcd;

  printf("Enter your tow number:");
  scanf("%d %d", &n1, &n2);

  for (int i = 1; i <= n1 && i <= n2;i++){
    if(n1%i==0 && n2%i==0){
      gcd = i;
    }
  }
  lcd = (n1 * n2) / gcd;
  printf("LCD: %d", lcd);
  return 0;
}