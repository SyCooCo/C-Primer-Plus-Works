#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�����һ����ߣ���λ�����ף���
//���ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�
//����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ��
//�����ʾ�����£�
/*
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in cantimeters (<=0 to quit): 0
bye
*/

#include <stdio.h>

int main()
{
	float height, inch;
	int feet;
	const float cm_i = 1 / 2.54;
	const int f_i = 12;
	printf("Enter a height in centimeters(<=0 to quit): ");
	scanf("%f", &height);
	while (height > 0)
	{
		inch = height * cm_i;
		feet = inch / f_i;
		inch = inch - feet * f_i;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		getchar();
		getchar();
		printf("Enter a height in centimeters(<=0 to quit): ");
		scanf("%f", &height);
	}
	printf("\nbye\n");
	return 0;
}