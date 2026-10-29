#include <stdio.h>
int main()
{
  char c;

  printf("Enter Your Charecter:");
  scanf("%c", &c);

  if (c >= 'a' && c <= 'z' || c>='A' && c<='Z')
  {
    printf("%c is Alpahabet.", c);
  }
  // else if (c >= 'A' && c <= 'Z')
  // {
  //   printf("%c is Alphabet.", c);
  // }
  else
  {
    printf("%c is an not Alphabet.", c);
  }

  return 0;
}