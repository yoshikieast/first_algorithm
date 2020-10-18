/*
* ------------------------------
*		一様乱数（線形合同法） *
* -------------------------------
*/

#include<stdio.h>

unsigned rndnum = 14;

unsigned irnd(void);

int main(void) {
	int j;
	for (j = 0; j < 100; j++) {
		printf("%8d", irnd());
	}
	printf("\n");
}

unsigned irnd(void) {
	rndnum = (rndnum * 77 + 601) % 128;
	return rndnum;
}