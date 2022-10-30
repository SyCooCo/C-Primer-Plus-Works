#define _CRT_SECURE_NO_WARNINGS 1
//��д������Fibonacci()�������ú�����ѭ������ݹ����쳲���������

#include <stdio.h>
int Fibonacci(int n);

int main()
{
	int n;
	printf("input: ");
	while (scanf("%d", &n) == 1)
	{
		printf("%d\ninput: ", Fibonacci(n));
	}
	printf("Done");
	return 0;
}

int Fibonacci(int n)
{
	int a = 1, b = 1, t, i;

	for (i = 2; i < n; i++)
	{
		t = b;
		b += a;
		a = t;
	}

	return b;
}