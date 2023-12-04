#include <stdio.h>
#include <string.h>
int main()
{

  char a[20];
  char b[20];
  printf("enter the string: ");

  gets(a);
  printf("\n%s", strcpy(b, a));
  printf("\n%s", strrev(b));
  if (strcmp(a, b) == 0)
  {
    printf("\ngiven string is palindrome");
  }
  else
  {
    printf("\ngiven string is not palindrome");
  }

  return 0;
}