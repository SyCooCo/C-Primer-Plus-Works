#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
//������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��
//ʹ��float���Ͳ���/��Ϊ���š�
//�ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС�������λ���֣�
/*
At 18.12 megabits per second, a file of 2.20 megabytes
download in 0.97 seconds
*/

#include <stdio.h>

int main()
{
	float dl;
	float fl;
	float tm;
	printf("Download speed(Mb/s):\n");
	scanf("%f", &dl);
	printf("File size(MB):\n");
	scanf("%f", &fl);
	tm = fl * 8 / dl;
	printf("At %.2f megabits pere second, a file of %.2f megabytes\n", dl, fl);
	printf("download in %.2f seconds", tm);
	return 0;
}