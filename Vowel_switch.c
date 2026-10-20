#include <stdio.h>

int main()
{
 /*
  //if else--- 
   char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is a Consonent.\n", letter);
    }
 */

 char c;
 printf("Enter a Charecter:");
 scanf("%c", &c);

 switch (c)
 {
  case 'a':
      printf("%c is a vouwel", c);
      break;
  case 'e':
      printf("%c is a vouwel", c);
      break;
  case 'i':
      printf("%c is a vouwel", c);
      break;
  case 'o':
      printf("%c is a vouwel", c);
      break;
  case 'u':
      printf("%c is a vouwel", c);
      break;
  case 'A':
      printf("%c is a vouwel", c);
      break;
  case 'E':
      printf("%c is a vouwel", c);
      break;
  case 'I':
      printf("%c is a vouwel", c);
      break;
  case 'O':
      printf("%c is a vouwel", c);
      break;
  case 'U':
      printf("%c is a vouwel", c);
      break;
 
 default:
     printf("%c is a Consonent Latter");
     break;
 }

 return 0;
}