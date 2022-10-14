#define _CRT_SECURE_NO_WARNINGS 1
// π”√switch÷ÿ–¥¡∑œ∞4°£

#include <stdio.h>
int main()
{
	char ch, c[255];
	int n, i, j;
	n = i = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			n++;
			break;
		case '!':
			c[i++] = ch;
			n++;
			break;
		default:
			break;
		}
		c[i++] = ch;
	}
	for (j = 0; j < i; j++)
		printf("%c", c[j]);
	printf("\nn=%d", n);
	return 0;
}