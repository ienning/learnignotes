/*************************************************************************
	> File Name: array1.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月15日 星期日 18时12分14秒
 ************************************************************************/

#include<stdio.h>
void find(int *nums, int num);
int main(int argc, const char *argv[])
{
	int num;
	printf("How much integer do you want to input?\n");
	scanf("%d", &num);
	int nums[num];
	printf("Please enter this number\n");
	for(int i = 0; i < num; i++)
	{
		scanf("%d",&nums[i]);
	}
	find(nums, num);
	return 0;
}
void find(int *nums, int num)
{
	int max = *nums;
	int min = *nums;
	int maxIndex = 1;
	int minIndex = 1;
	for (int i = 1; i < num; i++) {
		if(max < nums[i])
		{
			max = nums[i];
			maxIndex = i+1;
		}
		if(min > nums[i])
		{
			min = nums[i];
			minIndex = i + 1;
		}
	}
	printf("The Max number is %d whose index is %d, the Min number is %d whose index is %d\n", max, maxIndex, min, minIndex);
}
