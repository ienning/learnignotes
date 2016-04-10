/*************************************************************************
	> File Name: prac2.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年04月10日 星期日 21时19分39秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int isprimes(int n);
int main(int argc, const char *argv[])
{
	int num,answer;
	printf("Please input a number to judge whether is primeNum: \n");
	scanf("%d", &num);
	answer = isprimes(num);
	printf("%d\n",answer);
	if (answer)
		printf("num is prime\n");
	else
		printf("num is not prime\n");
	return 0;
}
int isprimes(int n)
{
	int k = n;
	int i = 1;
	for (i; pow(i,2) <= n; i++) {
		if (n % i == 0 && n % i != n)
		{	k = 0;
			break;}
		else
			continue;
	}
	return k;
}
