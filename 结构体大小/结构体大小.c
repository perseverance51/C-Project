#include <stdio.h>
#include <string.h>

struct date
{ //�ṹ��1
  int a;
  float b;
  char c[64];
} date1; //��������
int main()
{
  date1.a = 9527;
  date1.b = 3.14;
  strcpy(date1.c, "{\"perseverance\":\"courge\",\"green\":\"9527\"}"); // ��׼json�ַ�������ֵ����strcpy()
  printf("size = %d\n", sizeof(date1));
  printf("%d\n %.2f\n %s\n", date1.a, date1.b, date1.c);
  memset(&date1, 0, sizeof(date1));
  printf("%d\n %.2f\n %s\n", date1.a, date1.b, date1.c);
  return 0;
}
