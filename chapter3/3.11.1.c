#define _CRT_SECURE_NO_WARNINGS 1
//通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢，浮点数上溢和浮点数下溢的情况。
//该系统为64位系统，IDE为vs2022
#include <stdio.h>

int main(void)
{
	int toobig = 1255336333;
	float toobigf = 3.4E37;
	float toolittle = 0.01E-10;
	printf("整数上溢：%d %d\n", toobig, toobig + 22505145166);
	printf("浮点数上溢：%e %e\n", toobigf, toobigf * 1000.0f);
	printf("浮点数下溢：%e %e", toolittle, toolittle - 10);
	return 0;
}