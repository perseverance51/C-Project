#include <stdio.h>
void print(int a[], int len)
{
  printf("\t");
  for (int j = 0; j < len; j++)
  {
    printf("%d ", a[j]);
  }
  printf("\n");
}

void InsertSort(int a[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (a[i] < a[i - 1])
    { //若第i个元素大于i-1元素，直接插入。小于的话，移动有序表后插入
      int j = i - 1;
      int x = a[i];    //复制为哨兵，即存储待排序元素
      a[i] = a[i - 1]; //先后移一个元素
      while (x < a[j])
      { //查找在有序表的插入位置
        a[j + 1] = a[j];
        j--; //元素后移
      }
      a[j + 1] = x; //插入到正确位置
    }
    // printf("%d", a[i]);
  }
}

int main()
{
  int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
  int len = sizeof(a) / sizeof(int); //计算数组中的成员数
  print(a, len);
  InsertSort(a, len);
  print(a, len);
  return 0;
}