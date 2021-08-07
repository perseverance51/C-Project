#include <stdio.h>
void Print(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
/**
 * 数组的最小值
 *
 * @return int 数组的键值
 */
int SelectMinKey(int a[], int n, int i)
{
  int k = i;
  for (int j = i + 1; j < n; ++j)
  {
    if (a[k] > a[j])
      k = j;
  }
  return k;
}

/**
 * 选择排序
 *
 */
void selectSort(int a[], int n)
{
  int key, tmp;
  for (int i = 0; i < n; ++i)
  {
    key = SelectMinKey(a, n, i); //选择最小的元素
    if (key != i)
    {
      tmp = a[i];
      a[i] = a[key];
      a[key] = tmp; //最小元素与第i位置元素互换
    }
    Print(a, n);
  }
}
int main()
{
  int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52, 8, 7, 6, 9};
  int n = sizeof(a) / sizeof(int); //计算数组中的成员数
  Print(a, n);
  selectSort(a, n);
  //Print(a, n);
}