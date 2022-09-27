#define _CRT_SECURE_NO_WARNINGS 1
//许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
/*
Smile!Smile!Smile!
Smile!Smile!
Smile!
*/
//该程序需要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。

#include <stdio.h>

void sml(void);

int main(void)
{
	sml();
	sml();
	sml();
	printf("\n");
	sml();
	sml();
	printf("\n");
	sml();
	return 0;
}

void sml(void)
{
	printf("Smile!");
}
