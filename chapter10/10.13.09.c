#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬳�ʼ��һ��double���͵�3*5��ά���飬ʹ��һ������䳤����ĺ������俽������һ����ά�����С�
//��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�����������Ӧ���ܴ�������N*M����
//�������������֧�ֱ䳤���飬�����ô�ͳC��������N*5�����飩��
#include <stdio.h>
void copy_arr(int rows, double arr[][5], double target[][5]);
void print_arr(int rows, double arr[][5]);

int main()
{
	double arr[3][5] =
	{
		{ 1.1, 2.2, 3.3, 4.4, 5.5 },
		{ 2.2, 3.3, 4.4, 5.5, 6.6 },
		{ 3.3, 4.4, 5.5, 6.6, 7.7 }
	};
	double target[3][5];

	copy_arr(3, arr, target);
	printf("arr =\n");
	print_arr(3, arr);
	printf("target =\n");
	print_arr(3, target);
	return 0;
}

void copy_arr(int rows, double arr[][5], double target[][5])
{
	int i, j;
	for (j = 0; j < rows; j++)
	{
		for (i = 0; i < 5; i++)
			target[j][i] = arr[j][i];
	}
}

void print_arr(int rows, double arr[][5])
{
	int i, j;
	for (j = 0; j < rows; j++)
	{
		for (i = 0; i < 5; i++)
			printf("%g\t", arr[j][i]);
		printf("\n");
	}
	putchar('\n');
}