#define _CRT_SECURE_NO_WARNINGS 1
//修改编程练习5的程序，使其能计算整数的平方和
//（可以认为第1天赚$1、第2天赚$4、第三天赚$9，以此类推，这看起来很不错）。
//C没有平方函数，但是可以用n * n来表示n的平方。

#include <stdio.h>

int main()
{
	int count, sum, n, s_c;
	count = 0;
	sum = 0;
	printf("how many days?\n");
	scanf("%d", &n);
	while (count++ < n)
	{
		s_c = count * count;
		sum = sum + s_c;
	}
	printf("sum = %d\n", sum);
	return 0;
}