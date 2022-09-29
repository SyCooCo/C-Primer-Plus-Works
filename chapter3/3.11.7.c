#define _CRT_SECURE_NO_WARNINGS 1
//1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
//这章的题好无聊啊

#include <stdio.h>

int main()
{
	float inch;
	float cm;
	printf("请输入你的身高：   (英尺)\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &inch);
	cm = inch * 2.54;
	printf("\n你身高%.2f厘米", cm);
	return 0;
}