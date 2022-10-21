#define _CRT_SECURE_NO_WARNINGS 1
//修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了还是猜小了还是猜对了。
//如果猜小了，那么下一次猜测的值应该是50和100的中值，也就是75.如果猜大了，那么下一次猜测的值应是50和75的中值，等等。
//使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。

#include <stdio.h>
#define MAX 100
#define MIN 1

int main()
{
	int lg = MIN, ug = MAX, guess = 50;
	int n; //交换数值用临时参数
	char c;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\na b if it is big or s if it is small.\n");
	printf("Uh...is your number %d?\n", guess);
	while ((c = getchar()) != 'y')
	{
		switch (c)
		{
		case 'b':
			ug = guess;
			guess = (guess + lg) / 2;
			break;
		case 's':
			lg = guess;
			guess = (guess + ug) / 2;
			break;
		default:
			printf("\nillegal input!\nplease try again!\n");
			while ((c = getchar()) != '\n')
				continue;
			continue;
		}
		while ((c = getchar()) != '\n')
			continue;
		printf("Uh...is your number %d?\n", guess);
	}
	printf("I knew I could do it!\n");

	return 0;
}