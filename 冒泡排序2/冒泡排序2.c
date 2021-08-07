#include <stdio.h>

void Print(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Bubble_2(int arr[], int n)
{
  int low = 0;
  int high = n - 1; //设置变量的初始值
  int tmp, j;
  while (low < high)
  {
    for (j = low; j < high; ++j) //正向冒泡,找到最大者
      if (arr[j] > arr[j + 1])
      {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }

    --high; //修改high值, 前移一位
    Print(arr, n);

    for (j = high; j > low; --j) //反向冒泡,找到最小者
      if (arr[j] < arr[j - 1])
      {
        tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    ++low; //修改low值,后移一位
    Print(arr, n);
  }
}

int main()
{

  int arr[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52, 8, 7, 6, 9};
  int n = sizeof(arr) / sizeof(int); //计算数组中的成员数
  Print(arr, n);
  Bubble_2(arr, n);
}