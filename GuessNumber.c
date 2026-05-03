//GuessNumber.c
#include<stdio.h>
#include "IsRight.h"
#include "IsValidNum.h"

void GuessNumber(int number) {
	int guess;
	int count = 0;
	int right = 0;
	int ret;
	do {
		printf("Try:%d:",count+1);
		ret = scanf("%d",&guess);
		while(ret!=1||!IsValidNum(guess)) {
			printf("Input error!\n");
			while(getchar()!='\n');
			ret = scanf("%d",&guess);
		}
		count++;
		right = IsRight(number,guess);
	} while(!right && count<MAX_TIMES);
	if(right) {
		printf("恭喜你猜对了！\n");
	} else {
		printf("很遗憾在%d次尝试过后你仍然失败了。\n",MAX_TIMES);
	}
}
