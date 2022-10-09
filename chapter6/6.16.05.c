#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，提示用户输入大写字母。
//使用嵌套循环以下面金字塔形的格式打印字母：
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
//打印这样的图形，要根据用户输入的字母来决定。
//例如，上面的图形是在用户输入E后的打印结果。
//提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母。
//如果系统不使用ASCII或其他以数字顺序编码的代码，请参照练习3的解决方案。

#include <stdio.h>

int main()
{
    char u_l, l;
    int i, j, k;
    printf("请输入一个大写字母：");
    scanf("%c", &u_l);
    for (i = u_l - 'A' + 1, j = 1; j <= i; j++)
    {
        for (k = 1; k <= u_l - 'A' - j + 1; k++)
            printf(" ");
        for (l = 'A'; l < 'A' + j; l++)
            printf("%c", l);
        for (l -= 2; l >= 'A'; l--)
            printf("%c", l);
        printf("\n");
    }
    return 0;
}