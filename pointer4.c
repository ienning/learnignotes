/*************************************************************************
	> File Name: pointer4.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月23日 星期一 12时43分42秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void sortString(char *str1, char *str2, char *str3);
void prints(char *str1, char *str2, char *str3);
int main(int argc, const char *argv[])
{
	char str1[1000];
	char str2[1000];
	char str3[1000];
	printf("Please input fitst string: \n");
	scanf("%s", str1);
	printf("Please input next string: \n");
	scanf("%s", str2);
	printf("Please input last string\n");
	scanf("%s", str3);
	sortString(str1, str2, str3);
	return 0;
}
void sortString(char *str1, char *str2, char *str3) {
	if(strcmp(str1, str2)) {
		if(strcmp(str3, str1)) {
			prints(str3, str1, str2);
		}
		else {
			if(strcmp(str3, str2))
				prints(str1, str3, str2);
			else
				prints(str1, str2, str3);
		}
	}
	else
	{
		if(strcmp(str3, str2))
			prints(str3, str2, str1);
		else {
			if(strcmp(str1, str3))
				prints(str2, str1, str3);
			else
				prints(str2, str3, str1);
		}
	}
}
void prints(char *str1, char *str2, char *str3) {
	printf("The sort is:\n%s\n%s\n%s\n", str1, str2, str3);
}
