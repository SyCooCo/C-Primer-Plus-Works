#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
//ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
//ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����

#include <stdio.h>

int main()
{
	const int h_m = 60;
	int min, hour, rmin;
	printf("���ڹ�ȥ���������ˣ�(����<=0��ֵ���˳���\n");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / h_m;
		rmin = min % h_m;
		printf("Ҳ����˵�����ڹ�ȥ��%dСʱ%d���ӡ�\n", hour, rmin);
		getchar();
		getchar();
		printf("��ô�����ڹ�ȥ���������ˣ�(����<=0��ֵ���˳���\n");
		scanf("%d", &min);
	}
	printf("�ݰ�~");
	return 0;
}