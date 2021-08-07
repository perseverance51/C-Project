#include <stdio.h>
int count = 0;
void bubbleSort(int arr[], int n)
{
	int x, y, tmp;
	for (x = 0; x < n - 1; x++)
	{ //对数组进行n-1次比较

		for (y = 1; y < n - 1; y++)
		{ //对数组进行第一轮比较

			if (arr[y] > arr[y + 1])
			{ //比较数组中的第一对数据
				tmp = arr[y];
				arr[y] = arr[y + 1];
				arr[y + 1] = tmp;
				count++;
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
	int arr[] = {27, 36, 38, 44, 2, 3, 4, 5, 15, 19, 16, 46, 47, 48, 52};
	int len = sizeof(arr) / sizeof(int); //计算数组中的成员数
	printArray(arr, len);
	bubbleSort(arr, len);
	printArray(arr, len);
	printf("%d", count);
	return 0;
}
