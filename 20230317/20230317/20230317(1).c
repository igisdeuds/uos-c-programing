#include<stdio.h>
main(void) {

	char a[15];
	char b[50];
	char c[15];

	printf("이름 입력 : ");
	scanf_s("%s", a, sizeof(a));
	printf("학과 명 : ");
	scanf_s("%s", b, sizeof(b));
	printf("생일 : ");
	scanf_s("%s", c, sizeof(c));

	printf("\n이름 : %s\n", a);
	printf("학과 명 : %s\n", b);
	printf("생일 : %s\n", c);
}
