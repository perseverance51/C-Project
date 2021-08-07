#include <stdio.h>
int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52, 8, 7, 6, 9};
int n = sizeof(a) / sizeof(int); //计算数组中的成员数
void Print(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int a[], int low, int high)
{
  int privotKey = a[low]; //基准元素
  while (low < high)
  { //从表的两端交替地向中间扫描
    while (low < high && a[high] >= privotKey)
      --high; //从high 所指位置向前搜索，至多到low+1 位置。将比基准元素小的交换到低端
    swap(&a[low], &a[high]);
    while (low < high && a[low] <= privotKey)
      ++low;
    swap(&a[low], &a[high]);
  }
  Print(a, n);
  return low;
}

void quickSort(int a[], int low, int high)
{
  if (low < high)
  {
    int privotLoc = partition(a, low, high); //将表一分为二
    quickSort(a, low, privotLoc - 1);        //递归对低子表递归排序
    quickSort(a, privotLoc + 1, high);       //递归对高子表递归排序
  }
}

int main()
{

  Print(a, n);
  quickSort(a, 0, n - 1);
}