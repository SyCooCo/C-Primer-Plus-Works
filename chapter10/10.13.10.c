#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ�����浽�����������С�
//Ҳ����˵���������1�а�����ֵ��2��4��5��8������2�а�����ֵ��1��0��4��6��
//��ô�ú�����3��4��9��14������3�����顣��������3����������1�������С��
//��һ���򵥵ĳ����в��Ըú�����
#include <stdio.h>
void sub_arr(int ar1[], int ar2[], int tar[], int n);
void print_arr(int ar[], int n);

int main()
{
	int ar1[4] = { 2, 4, 5, 8 };
	int ar2[4] = { 1, 0, 4, 6 };
	int target[4];
	sub_arr(ar1, ar2, target, 4);
	print_arr(ar1, 4);
	print_arr(ar2, 4);
	print_arr(target, 4);
	return 0;
}

void sub_arr(int ar1[], int ar2[], int tar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		tar[i] = ar1[i] + ar2[i];
}

void print_arr(int ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ", ar[i]);
	putchar('\n');
}