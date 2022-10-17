#define _CRT_SECURE_NO_WARNINGS 1
//ABC邮政杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜售价为1.09美元/磅。在添加运费之前，100美元的订单有5%的打折优惠。
//少于或等于5磅的订单收取6.5美元的运费和包装费，5磅~20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
//编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q是退出订购。
//程序要记录累积的重量。即，如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
//随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。

#include <stdio.h>
#define YJ 2.05
#define TC 1.15
#define HLB 1.09
#define H_DC 100
#define DISCOUNT 0.05
#define WEIGHT1 5
#define WEIGHT2 20
#define FARE1 6.5
#define FARE2 14
#define FAREn 0.5

void view(float na, float nb, float nc);

int main()
{
	char choice, i;
	float na, nb, nc, n;
	na = nb = nc = 0;
	view(na, nb, nc);
	while ((choice = getchar()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			scanf("%f", &n);
			na += n;
			break;
		case 'b':
			scanf("%f", &n);
			nb += n;
			break;
		case 'c':
			scanf("%f", &n);
			nc += n;
			break;
		default:
			printf("\n非法输入！\n请重新输入：");
			continue;
		}
		while ((i = getchar()) != '\n')
			continue;
		view(na, nb, nc);
	}
	printf("\n欢迎下次光临！\n");
	return 0;
}

void view(float na, float nb, float nc)
{
	float weight, discount, total_v, total, fare;
	weight = na + nb + nc;
	total_v = na * YJ + nb * TC + nc * HLB;
	if (total_v >= H_DC)
		discount = total_v * DISCOUNT;
	else
		discount = 0;
	total = total_v - discount;
	if (weight == 0)
		fare = 0;
	else if (weight <= WEIGHT1)
		fare = FARE1;
	else if (weight <= WEIGHT2)
		fare = FARE2;
	else
		fare = FARE2 + (weight - WEIGHT2) * FAREn;

	printf("\n*****************************************************************************\n");
	printf("欢迎来到ABC邮政杂货店订购程序！\n");
	printf("a)  洋蓟 2.05美元/磅                          b)  甜菜 1.15美元/磅\n");
	printf("c)  胡萝卜 1.09美元/磅                        q)  退出订购\n");
	printf("*****************************************************************************\n");
	printf("您当前的购买信息：\n");
	printf("洋蓟：%-6.2f磅             甜菜：%-6.2f磅             胡萝卜：%-6.2f磅\n", na, nb, nc);
	printf("总重：%-6.2f磅                                共：%-6.2f美元\n", weight, total_v);
	printf("订单费用：%-6.2f美元                          折扣：%-6.2f美元\n", total, discount);
	printf("运费和包装费：%-6.2f美元                      总计：%-6.2f美元\n", fare, total + fare);
	printf("*****************************************************************************\n");
}