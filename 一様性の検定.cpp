/*
* ---------------------------------
*		一様性の検定		*
* --------------------------------
*/

#include<stdio.h>

#define N 1000			//乱数の発生回数
#define M 10			//整数乱数の範囲
#define F (N/M)			//期待値
#define SCALE (40.0/F)	//ヒストグラムの高さ（自動スケール）

unsigned rndnum = 13;

unsigned irnd(void);
double rnd(void);

int main(void) {
	int i, j, rank, hist[M + 1];
	double e = 0.0;

	for (i = 1; i <= M; i++)
		hist[i] = 0;

	for (i = 0; i < N; i++) {
		rank = (int)(M * rnd() + 1);	//１〜Mの乱数を一つ発生
		hist[rank]++;
	}

	for (i = 1; i <= M; i++) {
		printf("%3d:%3d ", i, hist[i]);
		for (j = 0; j < hist[i] * SCALE; j++)
			printf("*");
		printf("\n");

		e = e + (double)(hist[i] - F) * (hist[i] - F) / F;	//x２の計算
	}
	printf("x2=%f\n", e);
}

unsigned irnd(void) {
	rndnum = (rndnum * 109 + 1021) % 32768;
	return rndnum;
}

double rnd(void) {
	return irnd() / 32767.1;
}