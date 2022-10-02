#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
//程序中应计算文件的下载时间。注意，这里1字节等于8位。
//使用float类型并用/作为除号。
//该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后两位数字：
/*
At 18.12 megabits per second, a file of 2.20 megabytes
download in 0.97 seconds
*/

#include <stdio.h>

int main()
{
	float dl;
	float fl;
	float tm;
	printf("Download speed(Mb/s):\n");
	scanf("%f", &dl);
	printf("File size(MB):\n");
	scanf("%f", &fl);
	tm = fl * 8 / dl;
	printf("At %.2f megabits pere second, a file of %.2f megabytes\n", dl, fl);
	printf("download in %.2f seconds", tm);
	return 0;
}