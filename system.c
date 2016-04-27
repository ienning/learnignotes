/*************************************************************************
	> File Name: system.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年04月27日 星期三 20时13分22秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char md[20] = "shutdown -s -t";
	char t[5]  = "0";
	int c;
	system("title  C语言关机程序");
	system("mode con cols=48 lines=25");
	system("color f0");
	system("date /T");
	system("TIME /T");
	printf("---------- C语言关机程序 ----------\n");
	printf("1.实现10分钟内的定时关闭计算机\n");
	printf("2.立即关闭计算机\n");
	printf("3.注销计算机\n");
	printf("0.退出系统\n");
	printf("-----------------------------------\n");
	scanf("%d", &c);
	switch(c) {
		case 1:
			printf("你想在多少秒后关闭计算机? ( 0-600 )\n");
			scanf("%s", t);
			system(strcat(md,t));
			break;
		case 2:
			system("shutdown -p");
			break;
		case 3:
			system("shutdown -l");
			break;
		case 0:
			break;
		default:
			printf("Error!\n");

	}
	system("pause");
	return 0;
}
