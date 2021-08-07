#include <stdio.h>
int main()
{
  const int n = 88, m = 77;
  int *pal = (int *)&n;
  int **pal2 = &pal;
  **pal2 = 66;
  printf("\n%d", n);
}