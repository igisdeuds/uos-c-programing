#include<stdio.h>
main(void) {

	char a[15];
	char b[50];
	char c[15];

	printf("�̸� �Է� : ");
	scanf_s("%s", a, sizeof(a));
	printf("�а� �� : ");
	scanf_s("%s", b, sizeof(b));
	printf("���� : ");
	scanf_s("%s", c, sizeof(c));

	printf("\n�̸� : %s\n", a);
	printf("�а� �� : %s\n", b);
	printf("���� : %s\n", c);
}
