#include<stdio.h>

int main(void) {
	int c, key = 0x07;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			putchar(c);
		else
			putchar(c ^ key);
	}
}