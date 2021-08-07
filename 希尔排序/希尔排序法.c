#include <stdio.h>
void Print(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void ShellSort(int arr[], int n)
{
  int temp, i, j;
  for (int d = n / 2; d > 0; d = d / 2)
  { //将元素分组，d间距
    for (i = d; i < n; i++)
    {
      temp = arr[i];
      for (j = i - d; j >= 0 && temp < arr[j]; j = j - d)
      { //对分组成员进行比较
        arr[j + d] = arr[j];
        Print(arr, n);
      }
      arr[j + d] = temp;
    }
  }
}

int main()
{
  //int arr[] = {96, 61, 18, 26, 55, 42, 4, 72, 83};
  int arr[] = {2, 5, 6, 4, 3, 7, 9, 8, 1, 0, 13};
  int n = sizeof(arr) / sizeof(int); //计算数组中的成员数
  Print(arr, n);
  ShellSort(arr, n);

  return 0;
}