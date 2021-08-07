#include <stdio.h>
int count;
void selectSort(int arr[], int len)
{
  int minIndex;
  int i, j, temp;
  for (i = 0; i < len - 1; i++)
  {
    minIndex = i;
    for (j = i + 1; j < len; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    if (minIndex != i)
    {
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
      count++;
    }
    printf("%d", count);
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
  int arr[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
  int len = sizeof(arr) / sizeof(arr[0]);
  Print(arr, len);
  selectSort(arr, len);
  Print(arr, len);
  return 0;
}
