#include <stdio.h>

int main()
{
  int n, i, j, k = 1;

  n = 10;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
      printf("%-5d", k++);

    printf("\n");
  }

  return 0;
}
