/*
*-------------------------------------
* ���[�O���b�h�̌ݏ��@	*
* --------------------------
*/

#include<stdio.h>

int main(void) {
	int a, b, m, n, k;

	printf("��̐�������͂��Ă��������@");
	scanf_s("%d %d", &a, &b);

	m = a, n = b;
	do {
		k = m % n;
		m = n;
		n = k;
	} while (k != 0);
	printf("�ő���� =%d\n", m);
}