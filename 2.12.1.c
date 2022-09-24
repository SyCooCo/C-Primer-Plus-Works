#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。
//再调用一次printf()函数，把你的名和姓分别打印在两行。
//然后，再调用两次printf()函数，把你的名和姓打印在一行

#include <stdio.h>

int main(void)
{
	printf("lsy\n");

	printf("l\nsy\n");

	printf("l");
	printf("sy");

	return 0;
}