#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8������

#include <stdio.h>

int main()
{
	int i, nums[8];
	printf("input 8 numbers: ");
	for (i = 0; i < 8; i++)
		scanf("%d", &nums[i]);
	for (i = 7; i >= 0; i--)
		printf("%d ", nums[i]);
	return 0;
}