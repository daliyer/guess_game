//main.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "guess.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	char reply;
	srand(time(NULL));
	do {
		number = MakeNumber();
		GuessNumber(number);
		printf("你想继续游戏吗？请回答：Y,y或者N,n");
		scanf(" %c",&reply);
	} while(reply=='y'||reply=='Y');
	return 0;
}
