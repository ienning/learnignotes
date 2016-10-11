/*************************************************************************
	> File Name: pointer2.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月23日 星期一 11时30分38秒
 ************************************************************************/

#include<stdio.h>
void sorts(int *arr, int num);
int main(int argc, const char *argv[])
{
	int num;
	int arr[6] = {
		1, 3, 5, 7, 9
	};
	for (int i = 0; i < 5; i++) {
		printf("%-5d", *(arr+i));
	}
	printf("Please input a number to add this array\n");
	scanf("%d", &num);
	sorts(arr, num);
	printf("The new array is: \n");
	for (int i = 0; i < 6; i++) {
		printf("%-5d", *(arr+i));
	}
	return 0;
}
void sorts(int *arr, int num) {
	int num1 = 0;
	int num2 = 0;
	for(int i = 0; i < 5; i++) {
		if(num < *(arr+i))
		{
			num1 = *(arr+i+1);
			*(arr+i+1) = *(arr+i);
			*(arr+i) = num;
			for(int k = i+2; k < 6; k++) {
				num2 = num1;
				num1 = *(arr+k);
				*(arr+k) = num2;
			}
			break;
		}
		if(i == 4)
		{
			*(arr+5) = num;
		}
	}
}

