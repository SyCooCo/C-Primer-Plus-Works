#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��������ʾ�û������д��ĸ��
//ʹ��Ƕ��ѭ��������������εĸ�ʽ��ӡ��ĸ��
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
//��ӡ������ͼ�Σ�Ҫ�����û��������ĸ��������
//���磬�����ͼ�������û�����E��Ĵ�ӡ�����
//��ʾ�������ѭ�������У�ÿ��ʹ��3���ڲ�ѭ�����ֱ���ո��������ӡ��ĸ���Խ����ӡ��ĸ��
//���ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬�������ϰ3�Ľ��������

#include <stdio.h>

int main()
{
    char u_l, l;
    int i, j, k;
    printf("������һ����д��ĸ��");
    scanf("%c", &u_l);
    for (i = u_l - 'A' + 1, j = 1; j <= i; j++)
    {
        for (k = 1; k <= u_l - 'A' - j + 1; k++)
            printf(" ");
        for (l = 'A'; l < 'A' + j; l++)
            printf("%c", l);
        for (l -= 2; l >= 'A'; l--)
            printf("%c", l);
        printf("\n");
    }
    return 0;
}