#define _CRT_SECURE_NO_WARNINGS 1
//��дһ����������double���������е����ݵ������У�����һ���򵥵ĳ����в��Ըú�����
#include <stdio.h>
void anti(double* arr, int n);

int main()
{
	int i;
	double num[6];
	printf("input: ");
	for (i = 0; i < 6; i++)
		scanf("%lf", &num[i]);
	anti(num, 6);
	for (i = 0; i < 6; i++)
		printf("%g ", num[i]);
	return 0;
}

void anti(double* arr, int n)
{
	double* ptr, temp;
	int i;
	for (i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}