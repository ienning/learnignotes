/*************************************************************************
	> File Name: prac3.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年04月11日 星期一 12时13分31秒
 ************************************************************************/

#include<stdio.h>
int mulNum(int a, int b);
int main(int argc, const char *argv[])
{
	int a,b;
	printf("Please enter two int number : \n");
	scanf("%d %d", &a, &b);
	if (mulNum(a, b))
		printf("%-10d is multiple of %d\n", a, b);
	else
		printf("%-10d is not multiple of %d\n", a, b);
	return 0;
}
int mulNum(int a, int b)
{
	int n;
	if(a % b == 0)
		n = 1;
	else
		n = 0;
	return n;
}
