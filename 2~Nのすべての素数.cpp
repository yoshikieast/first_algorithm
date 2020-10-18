/*
*-----------------------
*	2�`N�̒�����f�����E���o��
*-------------------------------
*/

#include<stdio.h>
#include<math.h>

#define NUM 1000

int main(void) {
	int prime[NUM / 2 + 1];
	int i, n, m = 0, Limit;

	for (n = 2; n <= NUM; n++) {
		Limit = (int)sqrt((double)n);
		for (i = Limit; i > 1; i--) {
			if (n % i == 0)
				break;
		}
		if (i == 1)
			prime[m++] = n;
	}

	printf("\n�@���߂�ꂽ�f�� \n");
	for (i = 0; i < m; i++)
		printf("%5d", prime[i]);
	printf("\n");
}