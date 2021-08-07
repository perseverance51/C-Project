#include <reg52.h>
#define  uchar unsigned char
#define  uint unsigned int
	
sbit led = P0 ^ 0;
uchar Cout = 0;

void main()
{
     TMOD = 0X00;		 //0000 0000 定时器0，工作方式0
			EA=1;
    TH0 = (8192 - 5000) / 32; //5ms定时
    TL0 = (8192 - 5000) % 32;
    IE = 0X82; //1111 1101 T0中断允许位
    TR0 = 1;	 //启动定时器
    while (1);

    }
void led_flash() interrupt 1 //T0中断号为1
{
    TH0 = (8192 - 5000) / 32; //恢复初值
    TL0 = (8192 - 5000) % 32;
    if (++Cout == 100) //0.5秒开关一次，0.5S =5ms*100
    {
        led = !led; //取反
        Cout = 0;		//恢复初始值
    }
}

