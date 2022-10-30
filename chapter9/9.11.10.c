#define _CRT_SECURE_NO_WARNINGS 1
//为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()函数接受两个参数，
//且第二个参数在2~10范围内，然后以第2个参数中指定的进制打印第一个参数的数值。
//例如，to_base_n(129, 8)显示的结果为201，也就是129的八进制数。在一个完整的程序中测试该函数。

#include <stdio.h>
void to_base_n(unsigned long num, int n);

int main()
{
	unsigned long number;
	int n;
	printf("Enter an positive integer and an integer between 2~10 (q to quit):\n");
	while (scanf("%lu %d", &number, &n) == 2)
	{
		printf("Binary equivalent: ");
		to_base_n(number, n);
		putchar('\n');
		printf("Enter an positive integer and an integer between 2~10 (q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}

void to_base_n(unsigned long num, int n)
{
	int r;

	r = num % n;
	if (num >= n)
		to_base_n(num / n, n);
	printf("%d",r);

	return;
}