#include <stdio.h>
typedef void (*func)(void); //声明

void TASK1(void) { printf("I’m TASK1"); } //函数定义
void TASK2(void) { printf("I’m TASK2"); } //函数定义
void TASK3(void) { printf("I’m TASK3"); } //函数定义

void gTASK(char i)
{
  func vTask[3] = {&TASK1, &TASK2, &TASK3};
  func fun = vTask[i];
  (*fun)();
}
int main()
{
  gTASK(1);
  return 0;
}