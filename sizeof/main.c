//*sizeof*/////

#include <stdio.h>

int c = 88;
int *p = &c;
int shuzu[5] = {1, 2, 3, 4, 5};
int *ptr = &shuzu[0];
int main()
{
    int a = 0;
    char b = 1;
    char arr[12] = {0};
    *p = 9527;
    int len = sizeof(shuzu) / sizeof(int); //求数组长度
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(arr[2]));
    printf("%d\n", c);
    for (int i = 0; i < len; i++)
    {
        //  *(++ptr);
        // *ptr++;
        // *ptr = *(ptr + i);
        printf("%d\n", *ptr++);
    }

    return 0;
}