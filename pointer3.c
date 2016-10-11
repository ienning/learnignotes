/*************************************************************************
	> File Name: pointer3.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月23日 星期一 12时25分14秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void newcopy(char *new, char *old);
int main(int argc, const char *argv[])
{
	char *old = "This is OLd StrIng";
	char new[20];
	printf("The old String is : %s\n", old);
	newcopy(new, old);
	printf("This is new string : %s\n", new);
	return 0;
}
void newcopy(char *new, char *old)
{
	int count = 0;
	for(int i = 0; i < strlen(old); i++) {
		if(islower(*(old+i)))
			continue;
		else {
			if(*old != '\0')
			{
			*(new+count) = *(old+i);
			count++;
			}
		}
	}
	printf("The %ld\n", strlen(new));
}
