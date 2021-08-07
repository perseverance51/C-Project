#include <stdio.h>
void insertionSort(int *arr, int len)
{
  int i, j, tmp;
  for (i = 0; i < len - 1; i++)
  {
    //i=0的写法
    if (arr[i + 1] < arr[i])
    {
      tmp = arr[i + 1]; //取出小的元素
      for (j = i + 1; j >= 0 && arr[j - 1] > tmp; j--)
      {
        arr[j] = arr[j - 1];
      }
      arr[j] = tmp;
    }
  }
}

void Print(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  //int arr[] = {96, 61, 18, 26, 55, 42, 4, 72, 83};
  int arr[] = {2, 5, 6, 4, 3, 7, 9, 8, 1, 0, 13};
  int len = sizeof(arr) / sizeof(int); //计算数组中的成员数

  Print(arr, len);
  insertionSort(arr, len);
  Print(arr, len);

  return 0;
}