#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void Display(int *a, int n){
	for (register int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void bubble_sort(int *a, int n){
	register int i, j;
	int flag;
	//最多排序n-1次
	for (i = 0; i < n - 1; i++){
		flag = 0;
		//每排序一次，都会有一个元素放在了正确的位置，所以j<n-i-1
		for (j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				flag = 1;
			}
		}
		printf("第%d次冒泡排序后:", i + 1);
		Display(a, n);
		if (flag == 0) return;//如果一次交换都没有，则说明数组已经排好序，返回;
	}
}

int main(){
	int a[20];
	//生成一个有20个元素的随机数组
	srand((unsigned int)time(0));//修改种子
	for (register int i = 0; i < 20; i++){	
		a[i] = rand();
	}
	printf("原数组为：\n");
	Display(a, 20);
	printf("\n");
	bubble_sort(a, 20);
	printf("\n冒泡排序后：\n");
	Display(a, 20);
	return 0;
}
