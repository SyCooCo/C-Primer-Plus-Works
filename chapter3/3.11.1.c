#define _CRT_SECURE_NO_WARNINGS 1
//ͨ�����飨����д���д�������ĳ��򣩹۲�ϵͳ��δ����������磬����������͸���������������
//��ϵͳΪ64λϵͳ��IDEΪvs2022
#include <stdio.h>

int main(void)
{
	int toobig = 1255336333;
	float toobigf = 3.4E37;
	float toolittle = 0.01E-10;
	printf("�������磺%d %d\n", toobig, toobig + 22505145166);
	printf("���������磺%e %e\n", toobigf, toobigf * 1000.0f);
	printf("���������磺%e %e", toolittle, toolittle - 10);
	return 0;
}