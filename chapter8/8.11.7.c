#define _CRT_SECURE_NO_WARNINGS 1
//修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记。

#include <stdio.h>

#define WAGE1 8.75
#define WAGE2 9.33
#define WAGE3 10.00
#define WAGE4 11.20
#define TIME 40
#define OVERT 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
#define TAXR1 300
#define TAXR2 450

char request(void);

int main()
{
	char choice;
	float w_t, wage, tax, p_w, w_rate;

	while ((choice = request()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			w_rate = WAGE1;
			break;
		case 'b':
			w_rate = WAGE2;
			break;
		case 'c':
			w_rate = WAGE3;
			break;
		case 'd':
			w_rate = WAGE4;
			break;
		default:
			printf("\nillegal input!\n");
			continue;
		}

		printf("How many time you work for a week:");
		scanf("%f", &w_t);
		while (getchar() != '\n')
			continue;
		if (w_t <= TIME)
			wage = w_t * w_rate;
		else
			wage = w_rate * (TIME + (w_t - TIME) * OVERT);

		if (wage <= TAXR1)
			tax = wage * TAX1;
		else if (wage <= TAXR2)
			tax = TAXR1 * TAX1 + (wage - TAXR1) * TAX2;
		else
			tax = TAXR1 * TAX1 + TAXR2 * TAX2 + (wage - TAXR2) * TAX3;
		p_w = wage - tax;

		printf("\nw_rate:%-7.2f wage:%-7.2f\ntax:%-7.2f pure wage:%-7.2f\n", w_rate, wage, tax, p_w);
	}
	printf("Done");
	return 0;
}

char request(void)
{
	char choice;
	printf("\n*****************************************************************\n");
	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr                          b) $9.33/hr\n");
	printf("c) $10.00/hr                         d) $11.20/hr\nq) quit\n");
	printf("*****************************************************************\n");
	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;
	return choice;
}