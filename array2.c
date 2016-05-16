/*************************************************************************
	> File Name: array2.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月15日 星期日 18时29分13秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char ch[30] = "This is first number";
	char m;
	scanf("%c", &m);
	for(int i = 0; i < strlen(ch); i++)
	{
		if(ch[i] == m)
		{
			printf("The char %c which lie in %d at string %s\n", m, i+1, ch);
			break;
		}
		if(i == strlen(ch) - 1)
		{
			printf("Sorry don't exit this char\n");
		}
	}
	return 0;
}
