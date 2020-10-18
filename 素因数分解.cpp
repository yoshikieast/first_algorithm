/*
* -------------------------
*		‘fˆö”•ª‰ğ		
* ----------------------------
*/

#include<stdio.h>

int main(void) {
	int a, n;

	while (printf("Number ? "), scanf_s("%d", &n) != EOF) {
		a = 2;
		while (n >= a * a) {
			if (n % a == 0) {
				printf("%d*", a);
				n = n / a;
			}
			else
				a++;
		}
		printf("%d\n", n);
	}
}