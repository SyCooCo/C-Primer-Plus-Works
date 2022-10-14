#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。
//作如下假设：
/*
a. 基本工资 = 10.00美元/小时
b. 加班（超过40小时）= 1.5倍的时间
c. 税率：   前300美元为15%
			续150美元为20%
			余下的为25%
*/
//用#define定义符号常量。不用在意是否符合当前的税法。

#include <stdio.h>

#define WAGE 10.00
#define TIME 40
#define OVERT 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
#define TAXR1 300
#define TAXR2 450

int main()
{
	float w_t, wage, tax, p_w;
	printf("How many time you work for a week:");
	scanf("%f", &w_t);
	
	if (w_t <= TIME)
		wage = w_t * WAGE;
	else
		wage = WAGE * (TIME + (w_t - TIME) * OVERT);

	if (wage <= TAXR1)
		tax = wage * TAX1;
	else if (wage <= TAXR2)
		tax = TAXR1 * TAX1 + (wage - TAXR1) * TAX2;
	else
		tax = TAXR1 * TAX1 + TAXR2 * TAX2 + (wage - TAXR2) * TAX3;
	p_w = wage - tax;

	printf("\nwage:%f\ntax:%f\npure wage:%f", wage, tax, p_w);
	return 0;
}