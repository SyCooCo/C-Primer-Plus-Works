#define _CRT_SECURE_NO_WARNINGS 1
//��дһ����������ʾ�û���������Ȼ����ʾ�û������ա�
//��һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ����
//��ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
/*
Melissa Honeybee
      7        8
*/
//���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬������ʾ��
/*
Melissa Honeybee
7       8
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char fml[50];
    printf("Input your name:");
    scanf("%s", name);
    printf("Inout your family name:");
    scanf("%s", fml);
    int lname = strlen(name);
    int lfml = strlen(fml);
    printf("\n%s %s", name, fml);
    printf("\n%*d %*d", lname, lname, lfml, lfml);
    printf("\n%s %s", name, fml);
    printf("\n%-*d %-*d", lname, lname, lfml, lfml);
    return 0;
}