/*
* -------------------------------------
*	�V���v�\���̒�ϕ�
* -------------------------------
*/

#include<stdio.h>
#include<math.h>

#define f(x) (sqrt(4-(x)*(x)))	//�@��ϕ��֐�

int main(void) {
	int k;
	double a, b, n, h, fo, fe, sum;

	printf(" �ϕ���ԁ@A,B ? ");
	scanf_s("%lf %lf", &a, &b);

	n = 50;					//a�`b�Ԃ̕�����
	h = (b - a) / (2 * n);	//��ԕ�
	fo = 0;
	fe = 0;
	for (k = 1; k <= 2 * n - 3; k = k + 2) {
		fo = fo + f(a + h * k);
		fe = fe + f(a + h * (k + 1));
	}
	sum = (f(a) + f(b) + 4 * (fo + f(b - h)) + 2 * fe) * h / 3;
	printf("   �u %f\n", b);
	printf("    |   sqrt(4-x*x) =%f\n",sum);
	printf("    �v%f\n", a);
}