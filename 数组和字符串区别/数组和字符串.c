#include <stdio.h>
#include <string.h>
int main()
{
  char s1[] = "hello";
  char *s2 = "hello";

  printf("sizeof(s1) :  %s,%d,%d\n", s1, sizeof(s1), sizeof(s2));
  printf("strlen(s2) :  %s,%d,%d\n", s2, strlen(s1), strlen(s2));
  return 0;
  //getchar();
}
