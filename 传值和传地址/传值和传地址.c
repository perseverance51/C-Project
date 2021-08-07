#include <stdio.h>
#include <String.h>
char *pcolor[5] = {"Red", "Yellow", "Green", "Blue", "Orange"};
char scolor[][7] = {"Red", "Yellow", "Green", "Blue", "orange"};
char *a = "perseverance";
char arr[] = "perseverance", *pa = arr;
char s1[] = "array";      //字符数组
char s2[] = "ervergreen"; //数组长度=字符串长度+1，因为字符串末尾会自动添‘\0‘
char c[][7] = {"apple", "orange", "banana"};

int max(int a, int b)
{
  return (a > b ? a : b);
}
int min(int a, int b)
{
  return (a < b ? a : b);
}
int (*func)(int, int); //函数指针
int main()
{
  int result;
  //函数指针

  printf("%s,%c\n", pcolor[1], *pcolor[4]);

  printf("%s\n", scolor[1]);
  printf("%s", c[1]); //c[1]为第2行的数组名（首元素地址），输出 orange
  func = min;
  result = func(32, 78);
  printf("\n%d", result);
  func = max;
  result = func(32, 78);
  printf("\n%d", result);
  const volatile int n = 88, m = 77;
  int *pal = (int *)&n;
  *pal = 55;
  printf("\n%d", n);
}
