#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void ShellSort(int *arr, int n)
{
  int gap = n;
  while (gap > 1)
  {
    gap = gap / 3 + 1; //保证最后一次是1
    for (int i = 0; i < n - gap; ++i)
    {
      int end = i;
      int tmp = arr[end + gap];
      while (end >= 0) //直到找到合适的位置，再插入
      {
        if (arr[end] > tmp)
        {
          arr[end + gap] = arr[end];
          end -= gap;
        }
        else
        {
          break;
        }
        arr[end + gap] = tmp;
      }
    }
  }
}

void Print(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {9, 1, 12, 3, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  ShellSort(arr, n);
  Print(arr, n);
  system("pause");
  return 0;
}
