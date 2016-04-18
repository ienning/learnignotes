/*************************************************************************
	> File Name: prac4.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年04月11日 星期一 12时21分56秒
 ************************************************************************/

#include<stdio.h>
#include "hotel.h"
int main(int argc, const char *argv[])
{
	int m, n;
	printf("Please input two number m n: \n");
	scanf("%d %d", &m, &n);
	int a, b, c;
	a = combinNum(m);
	b = combinNum(n);
	c = combinNum(m - n);
	printf("%ld and %ld and %ld\n", a, b, c);
	if(m > n)
		printf("The answer is %ld\n",combinNum(m)/(combinNum(n) * combinNum(m-n)));
	else if (m == n)
		printf("sorry m euqal n\n");
	else
		printf("Sorry m < n\n");
	return 0;
}
