/*
* ----------------------------------
*	���[�N���b�h�̌ݏ��@	*
*------------------------------------
*/

#include<stdio.h>

int main(void) {
	int a, b, m, n;

	printf("��̐�������͂��Ă��������@");
	scanf_s("%d, %d", &a, &b);

	m = a, n = b;
	while (m != n) {
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	printf("�ō����� =%d\n", m);
}