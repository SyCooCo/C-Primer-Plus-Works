#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬷���һ��������Ȼ���ӡ������ı���
/*
Startled by the sudden sound, Sally shouted,
"By the great Pumpkin, what was that!"
*/

#include <stdio.h>

int main(void)
{
	printf("\aStartled by the sudden sound, Sally shouted,\n"
		"\"By the great Pumpkin, what was that!\"");
	getchar();
	printf("\a");         //����Ϊ��ȷ�Ͼ�����
	return 0;
}