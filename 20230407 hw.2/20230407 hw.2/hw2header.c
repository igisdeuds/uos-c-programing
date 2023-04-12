﻿#include<stdio.h>

int minP(int a, int b) {					//파라미터를 받는 최소공배수
	int min = 0;							// 최소공배수를 저장할 변수

	for (int i = 1; i < a + b; i++) {			//a와 b가 서로소일 경우 더 큰값보다는 많이 하기위해 적어도 a+b까지 i값을 증가시키며
		for (int j = 1; j < a+b; j++) {			//a와 b가 서로소일 경우 더 큰값보다는 많이 하기위해 적어도 a+b까지 ㅓ값을 증가시키며
			if (a * i == b * j) {				//a와 b의 각자의 배수의값을 비교하면서 그 값이 같을 경우의 조건
				if (min == 0) min = a * i;		//최소값이 저장이 안되어 있는 경우 첫번째 공배수가 찾아지면 그 수를 min변수에 저장한다.
				else if(min != 0) min = min;	//최소값이 저장이 되어있어 최소공배수를 찾는 경우 기존의 값을 그대로 다시 min의 변수에 넣는다.
			}
			
		}
	}

	printf("%d와%d의 최소공배수는 %d 입니다.\n",a, b, min);	//최소 공배수를 값을 출력
	return  min;												// 최소 공배수의 값을 반환 
}

int maxP(int a, int b) {	//파라미터를 받는 최대공약수
	int min = 1;			// 최대 공약수의 값을 저장할 변수

	for (int i = 1; i <= a; i++) {					// 두 수중 1개를 정하여 그 수까지 i을 증가시켜 약수인지 판별
		if ((a % i == 0) && (b % i == 0))min = i;	// 만약 i가 두 수 모두의 약수이면 i의 값을 min의 변수에 저장
	}

	printf("%d와 %d의 최대공약수는%d입니다.\n", a, b, min);			//위에서 구한 min값을 출력
	return min;														//위에서 구한 min값을 반환
}

int primeP(int a) {			//파라미터를 받는 소수 판
	int check = 0;			// 이값이 소수인지 아닌지의 여부를 판단하는 변수
	int i = 2;				//while문 종료 조건을 위한 변수

	while(i<=a) {								// i의 값을 a까지 증가시키며 그 수가 약수인지 판별
		if ((a % i == 0) && (a == i)) {			// i가 a의 약수이며 a와 같은 수인지 판별
			check = 1;							// a가 소수이므로 참의값인 1을 반환한다.
		}
		else if ((a % i == 0) && (a != i)) {	//a와 1 외의 약수가 있다는 조건
			check = 0;							// 소수가 아니므로 0의 값을 반환
		}
		else check = 0;							//조건 외의 나머지 부분을 구성
		i = i + 1;								// i의값을 while문이 진행될 떄마다 1씩 증가
	}

	if (check == 1) 	printf("%d는 소수입니다.\n", a);	// check의 값이 1일 경우 소수가 맞다는 출력을 한다.
	else printf("%d는 소수가 아닙니다.\n", a);				//소수가 아니므로 소수가 아니라는 출력

	if (check == 1) return 1;	//소수인 경우 1 반환
	else return 0;				//소수가 아닌경우 0 반환
}

int minS(void) {						//두 수를 입력받는 최소공배수
	int num1 = 0, num2 = 0;				// 실수형 숫자를 입력받을 변수
	int count1 = 1, count2 = 1;			//count1 = a값에 곱해줄 변수, count2 = b의 값에 곱해줄 변수

	printf("첫번째 실수를 입력하세요 :");	//입력받은 첫번째 숫자
	scanf_s("%d", &num1);					//입력받은 첫번째 숫자를 변수에 저장
	printf("두번째 실수를 입력하세요 : ");	//입력받은 두번째 숫자
	scanf_s("%d", &num2);					//입력받은 두번째 숫자를 변수에 저장

	int min = 0;							// 최소공배수를 저장할 변수

	for (int i = 1; i < num1 + num2; i++) {			//a와 b가 서로소일 경우 더 큰값보다는 많이 하기위해 적어도 a+b까지 i값을 증가시키며
		for (int j = 1; j < num1 + num2; j++) {			//a와 b가 서로소일 경우 더 큰값보다는 많이 하기위해 적어도 a+b까지 ㅓ값을 증가시키며
			if (num1 * i == num2 * j) {				//a와 b의 각자의 배수의값을 비교하면서 그 값이 같을 경우의 조건
				if (min == 0) min = num1 * i;		//최소값이 저장이 안되어 있는 경우 첫번째 공배수가 찾아지면 그 수를 min변수에 저장한다.
				else if (min != 0) min = min;	//최소값이 저장이 되어있어 최소공배수를 찾는 경우 기존의 값을 그대로 다시 min의 변수에 넣는다.
			}
		}
	}

	printf("%d와%d의 최소공배수는 %d 입니다.\n", num1, num2, min);	//최소 공배수를 값을 출력
	return  min;												// 최소 공배수의 값을 반환 									
}

int maxS(void) {				//두 수를 입력받는 최대공약수
	int num1 = 0, num2 = 0;		// 실수형 숫자를 입력받을 변수
	int min = 1;				// 최대 공약수의 값을 저장할 변수

	printf("첫번째 실수를 입력하세요 :");	//입력받은 첫번째 숫자
	scanf_s("%d", &num1);					//입력받은 첫번째 숫자를 변수에 저장
	printf("두번째 실수를 입력하세요 : ");	//입력받은 두번째 숫자
	scanf_s("%d", &num2);					//입력받은 두번째 숫자를 변수에 저장

	for (int i = 1; i <= num1; i++) {						// 두 수중 1개를 정하여 그 수까지 i을 증가시켜 약수인지 판별
		if ((num1 % i == 0) && (num2 % i == 0))min = i;		// 만약 i가 두 수 모두의 약수이면 i의 값을 min의 변수에 저장
	}

	printf("%d와%d의 최대공약수는 %d입니다.\n",num1, num2,  min);	//위에서 구한 min값을 출력
	return min;														//위에서 구한 min값을 반환
}

int primeS(void) {			//두 수를 입력받는
	int num1 = 0;			// 실수형 숫자를 입력받을 변수
	int check = 0;			// 이값이 소수인지 아닌지의 여부를 판단하는 변수
	int i = 2;				//while문의 끝을 지정하기 위한 변수

	printf("첫번째 실수를 입력하세요 :");	//입력받은 숫자
	scanf_s("%d", &num1);					//입력받은 첫번째 숫자를 변수에 저장

	while (i <= num1 ) {									// i의 값을 num값까지 증가시키며 그 수가 약수인지 판별
		if ((num1 % i == 0) && (num1 == i)) {			// i가 a의 약수이며 a와 같은 수인지 판별 
			check = 1;									// a가 소수이므로 참의값인 1을 반환한다.
		}
		else if ((num1 % i == 0) && (num1 != i)) {		//a와 1 외의 약수가 있다는 조건
			check = 0;									// 소수가 아니므로 0의 값을 반환
			break;										//소수가 아닌 조건이 만족하므로 while문 종료
		}
		else check = 0;				//조건 외의 나머지 부분을 구성
		i = i + 1;					//i의 값을 1 증가
	}

	if( check == 1) 	printf("%d는 소수입니다.\n", num1);		// check의 값이 1일 경우 소수가 맞다는 출력을 한다.
	else printf("%d는 소수가 아닙니다.\n", num1);				//소수가 아니므로 소수가 아니라는 출력

	if (check == 1) return 1;		//소수인 경우 1 반환
	else return 0;					//소수가 아닌경우 0 반환
}

