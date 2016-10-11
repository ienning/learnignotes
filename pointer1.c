/*************************************************************************
	> File Name: pointer1.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月23日 星期一 11时25分20秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, const char *argv[])
{
	float arr[10];
	float total = 0;
	for(int i = 0; i < 10; i++) {
		scanf("%f", &arr[i]);
	}
	for(int j = 0; j < 10; j++) {
		total += *(arr+j);
	}
	total /= 10;
	printf("The average is %0.2f\n",total);
	return 0;
}
