#include <stdio.h>
int main()
{
  const volatile int n = 88, m = 77;
  int *pal = (int *)&n;
  *pal = 55;
  printf("\n%d", n);
  getchar();
}