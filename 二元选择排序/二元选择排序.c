#include <stdio.h>
/** 这是伪函数, 逻辑判断不严谨
void selectSort(int r[],int n) {
	int i ,j , min ,max, tmp;
	for (i=1 ;i <= n/2;i++) {  
		// 做不超过n/2趟选择排序 
		min = i; max = i ; //分别记录最大和最小关键字记录位置
		for (j= i+1; j<= n-i; j++) {
			if (r[j] > r[max]) { 
				max = j ; continue ; 
			}  
			if (r[j]< r[min]) { 
				min = j ; 
			}   
	  }  
	  //该交换操作还可分情况讨论以提高效率
	  tmp = r[i-1]; r[i-1] = r[min]; r[min] = tmp;
	  tmp = r[n-i]; r[n-i] = r[max]; r[max] = tmp; 
 
	} 
}
 */
void Print(int *a, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
void selectSort(int a[], int len)
{
  int i, j, min, max, tmp;
  for (i = 0; i < len / 2; i++)
  { // 做不超过n/2趟选择排序
    min = max = i;
    for (j = i + 1; j < len - 1 - i; j++)
    {
      //分别记录最大和最小关键字记录位置
      if (a[j] > a[max])
      {
        max = j;
        continue;
      }
      if (a[j] < a[min])
      {
        min = j;
      }
    }
    //该交换操作还可分情况讨论以提高效率
    if (min != i)
    { //当第一个为min值，不用交换
      tmp = a[min];
      a[min] = a[i];
      a[i] = tmp;
    }
    if (min == (len - 1 - i) && max == i) //当第一个为max值，同时最后一个为min值，不再需要下面操作
      continue;
    if (max == i) //当第一个为max值，则交换后min的位置为max值
      max = min;
    if (max != len - 1 - i)
    { //当最后一个为max值，不用交换
      tmp = a[max];
      a[max] = a[len - 1 - i];
      a[len - 1 - i] = tmp;
    }
    Print(a, len);
  }
}
int main()
{
  //int arr[] = {96, 61, 18, 26, 55, 42, 4, 72, 83};
  int a[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52, 8, 7, 6, 9};
  int len = sizeof(a) / sizeof(int); //计算数组中的成员数

  Print(a, len);
  selectSort(a, len);
  // Print(a, len);
  return 0;
}