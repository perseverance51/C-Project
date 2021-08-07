#include<stdio.h>
#include<stdlib.h>
 
void BubbleSort(int a[], int len)
{
	int i, j, temp;
	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i < len - 1 - j; i++)
		if (a[i] > a[i + 1])
		{
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
}
 
int main()
{
	int arr[] = { 5, 8, 6, 3, 9, 2, 1, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
		printf("len：%d\n",len);
	printf("排序前：");

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
 
	BubbleSort(arr, len);//len排序次数
	printf("排序后：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}