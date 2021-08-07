#include <stdio.h>
void Print(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void Print2(int (*arr2)[3], int x, int y) //(*arr2)[3],arr2[][3],arr[2][3]
{
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }
}

int main()
{

  int arr[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
  int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int len = sizeof(arr) / sizeof(int); //计算数组中的成员数
  int len2 = sizeof(arr2) / sizeof(int);
  // Print(arr, len);
  // Print2(arr2, 3, 3);

  return 0;
}