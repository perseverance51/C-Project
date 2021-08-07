//*单向冒泡排序*/////

#include <stdio.h>
int count = 0;
void Show(int arr[], int n)
{ // 打印结果
   int i;
   for (i = 0; i < n; i++)
      printf("%d  ", arr[i]);
   printf("\n");
}

void Swap(int *num_a, int *num_b)
{ // 交换数组元素位置
   int temp = *num_b;
   *num_b = *num_a;
   *num_a = temp;
}

void BubbleSort(int *arr, int n)
{                                       // 冒泡排序
   int i, j, flag = 1;                  // i,j控制循环,flag是个标志
   for (i = 1; i < n && flag == 1; i++) // 进行n-1次循环。
   {
      flag = 0; //每次开始flag置零
      for (j = 0; j < n - i; j++)
      { //如果前一个数比后一个数大，交换位置
         if (arr[j] > arr[j + 1])
         {
            Swap(&arr[j], &arr[j + 1]);
            flag = 1; //如果有数据交换，则flag为1
            count++;
         }
      }
   }
}

int main()
{ //测试数据
   int arr_test[11] = {8, 4, 2, 3, 5, 1, 6, 9, 0, 7, 11};
   //排序前数组序列
   Show(arr_test, 11);
   BubbleSort(arr_test, 11);
   //排序后数组序列
   Show(arr_test, 11);
   printf("%d", count);
   return 0;
}
