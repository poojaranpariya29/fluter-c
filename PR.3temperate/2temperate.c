#include <stdio.h>
int main() {
  int n;
  int count = 0;
  printf("Enter number: ");
  scanf("%d", &n);

  while (n != 0)
  {
    n = n/10;
    ++count;
  }

  printf("Number of digits: %d", count);

  return 0;
}

    









