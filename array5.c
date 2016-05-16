/*************************************************************************
	> File Name: array5.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月16日 星期一 11时53分15秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, const char *argv[])
{
	float arrs[4][6];
	printf("Please input three rows and five columns\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			scanf("%f", &arrs[i][j]);
		}
		if(i < 2)
		{
			printf("Please Input next Row\n");
		}
	}
	for (int i = 0; i < 3; i++) {
		float total = 0;
		for (int j = 0; j < 5; j++) {
			total += arrs[i][j];
		}
		arrs[i][5] = total / 5;
	}
	for (int j = 0; j < 5; j++) {
		arrs[3][j] = 0;
		for(int i = 0; i < 3; i++)
		{
			arrs[3][j] += arrs[i][j];
		}
	}
	printf("average:\n");
	for(int k  = 0; k < 5; k++)
	{
		printf("%8.1f",arrs[3][k] / 3);
	}
	printf("\n");
	return 0;
}
