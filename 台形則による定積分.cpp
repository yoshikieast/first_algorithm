/*
* ------------------------------------
*	‘äŒ`‘¥‚É‚æ‚é’èÏ•ª
* --------------------------------------
*/

#include <stdio.h>
#include<math.h>

#define f(x) (sqrt(4-(x)*(x)))	//”íÏ•ªŠÖ”

int main(void) {
	int k;
	double a, b, n, h, x, s, sum;

	printf(" Ï•ª‹æŠÔ@A,B ? ");
	scanf_s("%lf %lf", &a, &b);

	n = 50;
	h = (b - a) / n;	//a`bŠÔ‚Ì•ªŠ„”
	x = a;				//‹æŠÔ•
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