#include <stdio.h>
int main()
{
  int num;

  printf("Enter your Number and cheack this number is possitive or nagetive:");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("%d Number is Possitive");
  }
  else if (num == 0)
  {
    printf("%d Number is Zerooo!");
  }
  else
  {
    printf("%d Number is Nagetive");
  }

  return 0;
}
