/*
* ------------------------------------
*	��`���ɂ���ϕ�
* --------------------------------------
*/

#include <stdio.h>
#include<math.h>

#define f(x) (sqrt(4-(x)*(x)))	//��ϕ��֐�

int main(void) {
	int k;
	double a, b, n, h, x, s, sum;

	printf(" �ϕ���ԁ@A,B ? ");
	scanf_s("%lf %lf", &a, &b);

	n = 50;
	h = (b - a) / n;	//a�`b�Ԃ̕�����
	x = a;				//��ԕ�
	s = 0;
	for (k = 1; k <= n - 1; k++) {
		x = x + h;
		s = s + f(x);
	}
	sum = h * ((f(a) + f(b)) / 2 + s);
	printf("   /%f\n", b);
	printf("   |  sqrt(4-x*x) =%f\n", sum);
	printf("   /%f\n", a);
}