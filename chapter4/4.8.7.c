#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��
//һ��float���͵ı�������Ϊ1.0/3.0.
//�ֱ���ʾ���μ���Ľ�������Σ�
//һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�
//������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��
//1.0/3.0��ֵ����Щֵһ����

#include <stdio.h>
#include <float.h>

int main()
{
	const double d = 1.0 / 3.0;
	const float f = 1.0 / 3.0;
	printf("d:\n%.6f\n%.12f\n%.16f\n", d, d, d);
	printf("f:\n%.6f\n%.12f\n%.16f\n", f, f, f);
	printf("FLT_DIG:%d\nDBL_DIG:%d\n", FLT_DIG, DBL_DIG);
	return 0;
}