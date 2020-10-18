/*
* --------------------------
*	‘f”‚Ì”»’è
* -----------------------
*/

#include<stdio.h>
#include<math.h>

int main(void) {
	int i, n, Limit;

	while (printf("data? "), scanf_s("%d", &n) != EOF) {
		if (n >= 2) {
			Limit = (int)sqrt((double)n);
			for (i = Limit; i > 1; i--) {
				if (n % i == 0)
					break;
			}
			if (i == 1)
				printf(" ‘f” \n");
			else
				printf(" ‘f”‚Å‚Í‚È‚¢ \n");
		}
	}
}