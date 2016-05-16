/*************************************************************************
	> File Name: array6.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月16日 星期一 12时37分05秒
 ************************************************************************/

#include<stdio.h>
int lenStr(char str[]);
int cmpStr(char str1[], char str2[]);
void catStr(char str1[], char str2[]);
int main(int argc, const char *argv[])
{
	char str1[100] = "This is first string";
	char str2[100] = "This is second string";
	int num = 0;
	printf("fitst string is: %s, second string is: %s\n", str1, str2);
	if(cmpStr(str1, str2) >= 0)
	{
		catStr(str2, str1);
	}
	else if(cmpStr(str1, str2) < 0)
	{
		catStr(str1, str2);
		num = lenStr(str1);
		printf("The string length is %d\n", num);
	}
	return 0;
}
int lenStr(char str[])
{
	int i = 0;
	int count = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}
	return count;
}
int cmpStr(char str1[], char str2[])
{
	int length1 = lenStr(str1);
	int length2 = lenStr(str2);
	int min = 0;
	int end = 0;
	if (length1 < length2) {
		min = length1;
		end = -1;
	}
	else if(length1 > length2)
	{
		min = length2;
		end = 1;
	}
	else
	{
		min = length1;
	}
	for(int i = 0; i < min; i++)
	{
		if(str1[i] < str2[i])
		{
			return -1;
		}
		else if(str1[i] > str2[i])
		{
			return 1;
		}
	}

	if(end == 0)
	{
		return 0;
	}
	else if(end == 1)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void catStr(char str1[], char str2[])
{
	int str1Length = lenStr(str1);
	int str2Length = lenStr(str2);
	for(int i = 0; i < str2Length; i++)
	{
		str1[str1Length + i] = str2[i];
	}
	printf("The new string is :\n");
	puts(str1);
}
