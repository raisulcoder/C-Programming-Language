#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, D, root1, root2, real, imnum;

  printf("Enter your value a b c:");
  scanf("%lf %lf %lf", &a, &b, &c);

  D = b * b - 4 * a * c;
  if (D > 0)
  {
    root1 = (-b + sqrt(D)) / (2 * a);
    root2 = (-b - sqrt(D)) / (2 * a);
    printf(" Root1=%.2lf and Root2= %.2lf", root1, root2);
  }
  else if (D == 0)
  {
    root1 = -b / (2 * a);
    printf("Root1 and Root2 Equel,So Root = %.2lf ", root1);
  }
  else
  {
    real = -b / (2 * a);
    imnum = sqrt(-D) / (2 * a);
    printf("Root1 = %.2lf + %.2lfi and Root2=%.2lf - %.2lfi", real, imnum, real, imnum);
  }

  return 0;
}