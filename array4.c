/*************************************************************************
	> File Name: array4.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月15日 星期日 19时26分50秒
 ************************************************************************/

#include<stdio.h>
void sortRank(float arr[], int n);
int find(float arr[], int n, float num);
int main(int argc, const char *argv[])
{
	int n;
	float num;
	printf("How much number do you want input?\n");
	scanf("%d", &n);
	float arrs[n];
	printf("Input these number: \n");
	for (int i = 0; i < n; i++) {
		scanf("%f", &arrs[i]);
	}
	sortRank(arrs, n);
	printf("These number sort rank\n");
	for (int i = 0; i < n; i++) {
		printf("%f\n", arrs[i]);
	}
	printf("Input a number\n");
	scanf("%f", &num);
	find(arrs, n , num);
	return 0;
}
void sortRank(float arr[], int n)
{
	for (int i = n - 1, change = 1; i >= 1 && change; --i) {
		change = 0;
		int nums = 0;
		for (int j = 0; j < i; ++j) {
			nums = arr[j];
			if (arr[j] > arr[j+1]) {
				arr[j] = arr[j+1];
				arr[j+1] = nums;
				change = 1;
			}
		}
	}
}
int find(float arr[], int n, float num)
{
	int middle = n / 2;
	if (arr[middle] < num && middle != 0) {
		find(arr, middle + n, num);
	}
	else if(arr[middle] > num && middle != 0)
	{
		find(arr, middle, num);
	}
	else if(arr[middle] == num)
	{
		printf("This number %f exit this array whose index is %d\n", num , middle + 1);
		return middle;
	}
	else
	{
		printf("This number %f don't exit this array\n", num);
		return NULL;
	}
}
