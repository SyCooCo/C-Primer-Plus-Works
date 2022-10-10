#define _CRT_SECURE_NO_WARNINGS 1
//考虑下面两个无限序列：
/*
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
*/
//编写一个程序计算这两个无限序列的总和，直到达到某次数。
//提示：奇数个-1 相乘得-1，偶数个-1 相乘得1。
//让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
//查看运行100项、1000项、10000项后的总和，是否能发现每个序列都收敛于某值？

#include <stdio.h>

int main()
{
	float i, j, s1, s2;
	int t, sign;
	printf("times: ");
	scanf("%d", &t);
	while (t > 0)
	{
		for (i = 1.0, s1 = 0; i <= t; i += 1.0)
			s1 += 1.0 / i;
		for (i = 1.0, s2 = 0; i <= t; i += 1.0)
		{
			for (j = 1, sign = -1; j <= i; j++)
				sign *= -1;
			s2 += sign * 1.0 / i;
		}
		printf("s1 = %f\ns2 = %f\n", s1, s2);
		printf("times: ");
		scanf("%d", &t);
	}
	printf("done");
	return 0;
}