#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ��ģ����Ľ����
//���û�����ĵ�1��������Ϊ��ģ����ĵ�2���������
//��������������б��ֲ��䡣�û�������������ǵ�1�� �������
//���û�����һ������ֵʱ�������������������£�
/*
This program computes modull.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand (<= 0 to quit): 1234567
1234567 % 256 is 135
Enter next number for first operand (<= 0 to quit): 0
Done
*/

#include <stdio.h>

int main()
{
	int s, f;
	printf("This program computes modull.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &s);
	printf("Now enter the first operand: ");
	scanf("%d", &f);
	while (f > 0)
	{
		printf("%d %% %d is %d\n", f, s, f % s);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &f);
	}
	printf("Done");
	return 0;
}