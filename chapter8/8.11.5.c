#define _CRT_SECURE_NO_WARNINGS 1
//�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬���������50��ѯ���û��ǲ´��˻��ǲ�С�˻��ǲ¶��ˡ�
//�����С�ˣ���ô��һ�β²��ֵӦ����50��100����ֵ��Ҳ����75.����´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�
//ʹ�ö��ֲ��ң�binary search�����ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�

#include <stdio.h>
#define MAX 100
#define MIN 1

int main()
{
	int lg = MIN, ug = MAX, guess = 50;
	int n; //������ֵ����ʱ����
	char c;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\na b if it is big or s if it is small.\n");
	printf("Uh...is your number %d?\n", guess);
	while ((c = getchar()) != 'y')
	{
		switch (c)
		{
		case 'b':
			ug = guess;
			guess = (guess + lg) / 2;
			break;
		case 's':
			lg = guess;
			guess = (guess + ug) / 2;
			break;
		default:
			printf("\nillegal input!\nplease try again!\n");
			while ((c = getchar()) != '\n')
				continue;
			continue;
		}
		while ((c = getchar()) != '\n')
			continue;
		printf("Uh...is your number %d?\n", guess);
	}
	printf("I knew I could do it!\n");

	return 0;
}