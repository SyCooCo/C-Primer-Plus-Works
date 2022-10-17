#define _CRT_SECURE_NO_WARNINGS 1
//1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。
//下面是该税收计划的摘要（美元数为应征税的收入）：
/*
-------------------------------------------------------------------------
类别                            |  税金
                                |
单身                            |  17850美元按15%计，超出部分按28%计
户主                            |  23900美元按15%计，超出部分按28%计
已婚，共有                      |  29750美元按15%计，超出部分按28%计
已婚，离异                      |  14875美元按15%计，超出部分按28%计
-------------------------------------------------------------------------
*/
//例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15*17850+0.28*(20000-17850)美元。
//编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。

#include <stdio.h>
#define TAXR1 17850
#define TAXR2 23900
#define TAXR3 29750
#define TAXR4 14875
#define TAX1 0.15
#define TAX2 0.28

int request(void);

int main()
{
    int wage, type, tax, choice;
	while ((choice = request()) != 5)
	{
		switch (choice)
		{
		case 1:
			type = TAXR1;
			break;
		case 2:
			type = TAXR2;
			break;
		case 3:
			type = TAXR3;
			break;
		case 4:
			type = TAXR4;
			break;
		default:
			printf("\n非法输入！\n");
			continue;
		}

		printf("应纳税收入为：");
		scanf("%d", &wage);
		if (wage <= type)
			tax = wage * TAX1;
		else
			tax = type * TAX1 + (wage - type) * TAX2;

		printf("税金为：%d", tax);
	}
	printf("ok");
	return 0;
}

int request(void)
{
	int choice;
	printf("\n**************************************************\n");
	printf("\n选择缴纳税金的种类：\n");
	printf("1) 单身                               2) 户主\n");
	printf("3) 已婚，共有                         4) 已婚，离异\n5) 退出\n");
	printf("****************************************************\n");
	scanf("%d", &choice);
	return choice;
}