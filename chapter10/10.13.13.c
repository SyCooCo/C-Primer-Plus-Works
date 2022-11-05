#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设用户都正确地响应，不会输入非数值数据）。
//该程序应完成下列任务。
/*
a. 把用户输入的数据储存在3*5的数组中
b. 计算每组（5个）数据的平均值
c. 计算所有数据的平均值
d. 找出这15个数据的最大值
e. 打印结果
*/
//每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b，要编写一个计算并返回一维数组平均值的函数，
//利用循环调用该函数三次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
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