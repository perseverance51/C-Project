#include <stdio.h>
int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
int len = sizeof(a) / sizeof(int); //计算数组中的成员数
void Print(int a[], int len)
{
  printf("\t");
  for (int j = 0; j < len; j++)
  {
    printf("%d ", a[j]);
  }
  printf("\n");
}
//二分查找（折半查找），版本1
int BinarySearch1(int a[], int value, int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (a[mid] == value)
      return mid;
    if (a[mid] > value)
      high = mid - 1;
    if (a[mid] < value)
      low = mid + 1;
    Print(a, len);
  }
  //return -1;
}

int main()
{

  Print(a, len);
  int num = BinarySearch1(a, 52, len);

  return 1;
}
