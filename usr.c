/*************************************************************************
	> File Name: usr.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月23日 星期一 13时13分21秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char *a = "abc";
	char *b = "bbc";
	if(strcmp(a,b))
		printf("false\n");
	else
		printf("true\n");
	return 0;
}
