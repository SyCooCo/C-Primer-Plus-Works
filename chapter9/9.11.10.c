#define _CRT_SECURE_NO_WARNINGS 1
//Ϊ���ó����嵥9.8�е�to_binary()������ͨ�ã���дһ��to_base_n()������������������
//�ҵڶ���������2~10��Χ�ڣ�Ȼ���Ե�2��������ָ���Ľ��ƴ�ӡ��һ����������ֵ��
//���磬to_base_n(129, 8)��ʾ�Ľ��Ϊ201��Ҳ����129�İ˽���������һ�������ĳ����в��Ըú�����

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