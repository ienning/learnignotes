/*************************************************************************
	> File Name: array3.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月15日 星期日 18时42分25秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, const char *argv[])
{
	int n;
	printf("Please enter a number between 2 and 10\n");
	scanf("%d", &n);
	int arr[n][n];
	int change[n];
	int max,min;
	int maxRowIndex, maxColumnIndex, minRowIndex, minColumnIndex;
	for (int i = 0; i < n; i++) {
		printf("Input row number\n");
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			printf("Please input next number\n");
		}
	}
	printf("This array\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%8d",arr[i][j]);
		}
		printf("\n");
	}
	max = arr[0][0];
	min = arr[0][0];
	maxRowIndex = 0;
	maxColumnIndex = 0;
	minRowIndex = 0;
	minColumnIndex = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < arr[i][j]) {
				maxRowIndex = i;
				maxColumnIndex = j;
				max = arr[i][j];
			}
			if (min > arr[i][j]) {
				minRowIndex = i;
				minColumnIndex = j;
				min = arr[i][j];
			}
		}
	}
	if(minRowIndex == maxRowIndex)
	{
		printf("max number and min number at same row\n");
	}
	else
	{
		for (int i = 0; i < n; i++) {
			change[i] = arr[minRowIndex][i];
		}
		for (int i = 0; i < n; i++) {
			arr[minRowIndex][i] = arr[maxRowIndex][i];
			arr[maxRowIndex][i] = change[i];
		}
		printf("New arr\n");
		for(int i; i < n; i++)
		{
			for (int j = 0; j < n; j++) {
				printf("%8d",arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
