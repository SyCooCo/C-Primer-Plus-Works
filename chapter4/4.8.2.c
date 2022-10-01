#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入名字，并执行以下操作：
/*
a.打印名字，包括双引号；
b.在宽度为20字段的右端打印名字，包括双引号；
c.在宽度为20字段的左端打印名字，包括双引号；
d.在比姓名宽度宽3的字段中打印名字。
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name[1000];
	printf("请输入你的名字：\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s", strlen(name) + 3 , name);
	return 0;
}