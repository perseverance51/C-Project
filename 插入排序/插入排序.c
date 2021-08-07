#include <stdio.h>
void insertionSort(int *arr, int len) //数组传参，可以是指针，也可以是数组arr[]
{
  int i, j, tmp;

  for (i = 1; i < len - 1; i++)
  {
    //i=1的写法
    tmp = arr[i]; //从未排序的队列，拿出一个数

    for (j = i - 1; j >= 0 && arr[j] > tmp; j--) //拿出的数与前面排好序的数进行比较
    {
      arr[j + 1] = arr[j]; //将大的数右移
    }
    arr[j + 1] = tmp; //将最大的数放置在右边
    Print(arr, len);
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
  int arr[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
  int len = sizeof(arr) / sizeof(int); //计算数组中的成员数

  Print(arr, len);
  insertionSort(arr, len);
  //Print(arr, len);
  return 0;
}