#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û�����������Ȼ����ת����������������
//���磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
/*
18 days are 2 weeks, 4 days.
*/
//ͨ��whileѭ�����û��ظ��������������û�����һ��������ֵʱ
//����0��-20����ѭ��������

#include <stdio.h>

int main()
{
	int days, weeks, rdays;
	printf("���ڹ�ȥ�����ˣ�(����<=0��ֵ���˳�)\n");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / 7;
		rdays = days % 7;
		printf("Ҳ����˵�����ڹ�ȥ��%d��������%d�졣\n", weeks, rdays);
		getchar();
		getchar();
		printf("��ô�����ڹ�ȥ�����ˣ�(����<=0��ֵ���˳�)\n");
		scanf("%d", &days);
	}
	printf("�ݰ�~");
	return 0;
}