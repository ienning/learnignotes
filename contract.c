/*************************************************************************
	> File Name: contract.c
	> Author: enning
	> Mail: enningwan@gmail.com 
	> Created Time: 2016年05月30日 星期一 14时04分21秒
 ************************************************************************/

#include<stdio.h>
typedef struct student {
	char name[20];
	int math;
	int cal;
	int eng;
	int pe;
	int total;
} Student;
void sort(struct student *en, int num);
int main(int argc, const char *argv[])
{
	Student en[10];
	Student * em = en;
	printf("Please input 10 students name, math , cal, English, PE grade\n");
	for (int i = 0; i < 10; i++) {
		scanf("%s,%d,%d,%d,%d", (em+i)->name, (em+i)->math, (em+i)->cal, (em+i)->eng, (em+i)->pe );
		(em+i)->total = (em+i)->math + (em+i)->cal + (em+i)->eng + (em+i)->pe;
	}
	sort(em, 10);
	return 0;
}
void sort(struct student *en, int num)
{
	struct student * re = en;
	for (int i = 0; i < num; i++) {
		for(int j = 0; j < num-1; j++) {
			if(((en+j)->total) > ((en+j+1)->total))
			{
				re = en + j;
				(en + j) = (en + j + 1);
				(en + j + 1) = re;
			}
		}
	}
}

