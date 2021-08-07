//*双向冒泡排序*/////

#include <stdio.h>

#define Max_ 11 //设置冒泡排序成员数量

// 打印结果
void Show(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d \n ", arr[i]);
}

// 交换数组元素位置
void Swap(int *num_a, int *num_b)
{
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}

//改进版的冒泡排序(双向冒泡)
void BidBubbleSort(int array[], int n)
{
    int low, high, flag, i;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        flag = 0;
        for (i = low; i < high; i++) //正向冒泡
        {
            if (array[i] > array[i + 1]) //找到剩下中最大的
            {
                Swap(&array[i], &array[i + 1]);
                flag = 1; //标志， 有数据交换
            }
        }
        if (!flag)
            break;
        // return;
        high--;
        for (i = high; i > low; i--) //反向冒泡
        {
            if (array[i] < array[i - 1]) //找到剩下中最小的
                Swap(&array[i], &array[i - 1]);
        }
        low++;
    }
}

int main()
{ //测试数据
    int arr_test[Max_] = {8, 4, 2, 3, 5, 1, 6, 9, 0, 7, 49};
    //排序前数组序列
    Show(arr_test, Max_);
    BidBubbleSort(arr_test, Max_);
    //排序后数组序列
    Show(arr_test, Max_);
    return 0;
}