#define _CRT_SECURE_NO_WARNINGS 1
//��дһ����������һ��int���͵�3*5��ά���飬���ú��ʵ�ֵ��ʼ������
//�ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2����������ʾ����Ԫ�ص���ֵ��
//��дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ������
//�������������Ժ�������������Ϊ������
#include <stdio.h>
void print_arr(int* a, int n);
void tt(int* a, int n);

int main()
{
	int a[3][5] =
	{
		{ 1, 2, 3, 4, 5 },
		{ 2, 3, 4, 5, 6 },
		{ 3, 4, 5, 6, 7 }
	};
	print_arr(a, 3);
	tt(a, 3);
	print_arr(a, 3);
	return 0;
}

void tt(int a[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			a[i][j] *= 2;
}

void print_arr(int a[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
		putchar('\n');
	}
}