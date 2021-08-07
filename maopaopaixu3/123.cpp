#include <stdio.h>

void bubbleSort(int arr[], int n)
{
	int i, j, tmp, flag = 1;

	for (i = 0; i < n - 1 && flag == 1; i++)
	{
		flag = 0; //每次开始flag置零
		for (j = 1; j < n; j++)
		{ //比较第一轮
			if (arr[j] < arr[j - 1])
			{ //比较数组中前后位置的数大小
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = 1; //如果有数据交换，则flag为1
			}
		}
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = {2, 5, 6, 4, 3, 7, 9, 8, 1, 0};
	printArray(arr, 10);
	bubbleSort(arr, 10);
	printArray(arr, 10);
	return 0;
}
