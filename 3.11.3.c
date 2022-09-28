#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，发出一声警报，然后打印下面的文本：
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
	printf("\a");         //这是为了确认警报声
	return 0;
}