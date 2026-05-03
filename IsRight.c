//IsRight.c
#include<stdio.h>
#include "IsRight.h"
int IsRight(int number,int guess) {
	if(guess<number) {
		printf("错了，太小了\n");
		return 0;
	} else if(guess>number) {
		printf("错了，太大了\n");
		return 0;
	} else {
		return 1;
	}
}
