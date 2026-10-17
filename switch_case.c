// Calculator create by C
#include <stdio.h>
int main()
{
    char oparetion, storege;
    int num1, num2;
    jump:
    printf("Enter Your Oparetor(+, _, *, /)");
    scanf("%c", &oparetion);
    printf("Enter Your Number:Example(23 54)");
    scanf("%d %d", &num1, &num2);
    switch (oparetion)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;

    default:
        printf("Error! Your Oparetor is wrong.Try again \n");
        scanf("%c",&storege);
        goto jump;

        break;

    }
    return 0;
}
