#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�����3������ÿ��������5��double���͵����������û�����ȷ����Ӧ�������������ֵ���ݣ���
//�ó���Ӧ�����������
/*
a. ���û���������ݴ�����3*5��������
b. ����ÿ�飨5�������ݵ�ƽ��ֵ
c. �����������ݵ�ƽ��ֵ
d. �ҳ���15�����ݵ����ֵ
e. ��ӡ���
*/
//ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ�����������b��Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ�����
//����ѭ�����øú������Ρ����ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c��d�ĺ���Ӧ�ѽ����������������
#include <stdio.h>
void input(double arr[][5], int n);
double average(double arr[], int n);
double all_average(double arr[][5], int n);
double max(double arr[][5], int n);
void print(double arr[][5], int n);

int main()
{
	double arr[3][5];
	input(arr, 3);
	print(arr, 3);
	return 0;
}

void input(double arr[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		printf("input 5 numbers: ");
		for (j = 0; j < 5; j++)
			scanf("%lf", &arr[i][j]);
	}
}

double average(double arr[], int n)
{
	int i, tot = 0;
	for (i = 0; i < n; i++)
		tot += arr[i];
	return tot / (double)n;
}

double all_average(double arr[][5], int n)
{
	int i, j, tot = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			tot += arr[i][j];
	return tot / ((double)n * 5);
}

double max(double arr[][5], int n)
{
	int i, j, max = arr[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			max = max > arr[i][j] ? max : arr[i][j];
	return max;
}

void print(double arr[][5], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		printf("\naverage%d: %lf", i + 1, average(arr[i], 5));
	printf("\naverage of all numbers: %lf\n", all_average(arr, n));
	printf("\nmax number: %lf\n", max(arr, n));
}