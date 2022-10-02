#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，先提示用户输入名，然后提示用户输入姓。
//在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
//字母数要与相应名和姓的结尾对齐，如下所示：
/*
Melissa Honeybee
      7        8
*/
//接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
/*
Melissa Honeybee
7       8
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char fml[50];
    printf("Input your name:");
    scanf("%s", name);
    printf("Inout your family name:");
    scanf("%s", fml);
    int lname = strlen(name);
    int lfml = strlen(fml);
    printf("\n%s %s", name, fml);
    printf("\n%*d %*d", lname, lname, lfml, lfml);
    printf("\n%s %s", name, fml);
    printf("\n%-*d %-*d", lname, lname, lfml, lfml);
    return 0;
}