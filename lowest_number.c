#include <stdio.h>
int main()
{
  int n1, n2, n3;
  printf("Enter your three Number:");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 <= n2 && n1 <= n3)
  {
    printf("%d is lowest number\n", n1);
  }
  else if (n2 <= n1 && n2 <= n3)
  {
    printf("%d is lowest number\n", n2);
  }
  else
  {
    printf("%d is lowest number\n", n3);
  }
  return 0;
}