#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入身高（单位：米）和姓名，
//然后以下面的格式显示用户刚输入的信息：
/*
Dabney, you are 1.78 metre tall
*/
//使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，
//并以米为单位显示出来。

#include <stdio.h>

int main()
{
	float height;
	char name[50];
	printf("your name：");
	scanf("%s", name);
	printf("your height：___cm\b\b\b\b\b");
	scanf("%f", &height);
	printf("%s, you are %.2f metre tall", name , height/100);
	return 0;
}