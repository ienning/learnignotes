/*************************************************************************
	> File Name: hotel.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年04月11日 星期一 12时33分55秒
 ************************************************************************/

#include<stdio.h>
#include "hotel.h"
long int combinNum(int n)
{
	long int answer;
	if(n > 0)
		answer = n * combinNum(n-1);
	else
		answer = 1;
	return answer;
}
