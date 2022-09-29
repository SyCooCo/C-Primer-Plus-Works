#define _CRT_SECURE_NO_WARNINGS 1
//在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
//编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
//思考对于该程序，为何使用浮点类型会比整数类型更合适？

#include <stdio.h>

int main()
{
	float glass;
	printf("请输入杯数：");
	scanf("%f", &glass);
	printf("其相当于：\n%.2f品脱\n%.2f盎司\n%.2f汤勺\n%.2f茶勺", glass / 2, glass * 8,
		glass * 8 * 2, glass * 8 * 2 * 3);
	return 0;
}