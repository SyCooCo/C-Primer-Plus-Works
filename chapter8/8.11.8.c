#define _CRT_SECURE_NO_WARNINGS 1
//��дһ����������һ���ṩ�ӷ����������˷��������Ĳ˵�����ȡ�û�ѡ���ѡ��󣬳�����ʾ�û������������֣�Ȼ��ִ���û��ղ�ѡ��Ĳ�����
//�ó���ֻ���ܲ˵��ṩ��ѡ�����ʹ��float���͵ı��������û���������֣�����û�����ʧ�ܣ��������ٴ����롣
//���г�������ʱ������û�����0��Ϊ��2������������������Ӧ��ʾ�û���������һ����ֵ���ó����һ������ʾ�����£�
/*
Enter the operation of your choice:
a. add			s. substract
m. multiply		d. divide
q. quit
a
Enter first number: 22.4
Enter second number: one
one is not an number.
Please enter a number, such as 2.5, -1.78E8, or 3: 1
22.4 + 1 = 23.4
Enter the operation of your choice:
a. add			s. substract
m. multiply		d. divide
q. quit
d
Enter first number: 18.4
Enter second number: 0
Enter a number other than 0: 0.2
18.4 / 0.2 = 92
Enter the operation of your choice:
a. add			s. substract
m. multiply		d. divide
q. quit
q
Bye
*/

#include <stdio.h>

char view(void);
float input(void);

int main()
{
	char choice;
	float a, b;

	while ((choice = view()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			printf("Enter first number: ");
			a = input();
			printf("Enter second number: ");
			b = input();
			printf("%g + %g = %g\n", a, b, a + b);
			break;
		case 's':
			printf("Enter first number: ");
			a = input();
			printf("Enter second number: ");
			b = input();
			printf("%g - %g = %g\n", a, b, a - b);
			break;
		case 'm':
			printf("Enter first number: ");
			a = input();
			printf("Enter second number: ");
			b = input();
			printf("%g * %g = %g\n", a, b, a * b);
			break;
		case 'd':
			printf("Enter first number: ");
			a = input();
			printf("Enter second number: ");
			while ((b = input()) == 0)
				printf("Enter a number other than 0: ");
			printf("%g / %g = %g\n", a, b, a / b);
			break;
		default:
			printf("illegal input!try again!\n");
			continue;
		}
	}

	printf("Bye");
	return 0;
}

char view(void)
{
	char choice;
	printf("Enter the operation of your choice:\n"
		"a.add			s.substract\n"
		"m.multiply		d.divide\nq.quit\n");
	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;
	return choice;
}

float input(void)
{
	float n;
	char ch[32];
	while (scanf("%f", &n) != 1)
	{
		scanf("%s", ch);
		printf("%s is not an number\n", ch);
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
		while (getchar() != '\n')
			continue;
	}
	while (getchar() != '\n')
		continue;
	return n;
}