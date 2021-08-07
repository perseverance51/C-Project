#include <stdio.h>
int count = 0;
void swap(int *a, int i, int j)
{
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void Print(int a[], int len)
{
  printf("\t");
  for (int j = 0; j < len; j++)
  {
    printf("%d ", a[j]);
  }
  printf("\n");
}

void insertionSort(int *a, int len)
{
  int i, j;
  for (i = 1; i < len - 1; i++)
  {
    for (j = i; j > 0 && a[j] < a[j - 1]; j--)
    {
      // if (a[j] < a[j - 1])
      // {
      swap(a, j, j - 1);
      count++;
      // }
    }
  }
}

int main()
{

  int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
  int len = sizeof(a) / sizeof(int); //计算数组中的成员数
  Print(a, len);
  insertionSort(a, len);
  Print(a, len);
  printf("%d", count);
  return 0;
}