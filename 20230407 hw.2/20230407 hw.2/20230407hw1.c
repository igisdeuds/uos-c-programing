#include<stdio.h> // 헤더함수 
#include"hw2header.h"		// 과제 2에서 만든 헤더함수 

void print(int a) {	//입력받은 나머지를 문자로 출력하는 함수
	char prs = '0';	//출력할 값을 저장할 변수

	if (a == 0) prs = '0';	// 입력받은 나머지가 0일때
	else if (a == 1) prs = '1'; // 입력받은 나머지가 1일때
	else if (a == 2) prs = '2'; // 입력받은 나머지가 2일때
	else if (a == 3) prs = '3'; // 입력받은 나머지가 3일때
	else if (a == 4) prs = '4'; // 입력받은 나머지가 4일때
	else if (a == 5) prs = '5'; // 입력받은 나머지가 5일때
	else if (a == 6) prs = '6'; // 입력받은 나머지가 6일때
	else if (a == 7) prs = '7'; // 입력받은 나머지가 7일때
	else if (a == 8) prs = '8'; // 입력받은 나머지가 8일때
	else if (a == 9) prs = '9'; // 입력받은 나머지가 9일때
	else if (a == 10) prs = 'A'; // 입력받은 나머지가 10일때
	else if (a == 11) prs = 'B'; // 입력받은 나머지가 11일때
	else if (a == 12) prs = 'C'; // 입력받은 나머지가 12일때
	else if (a == 13) prs = 'D'; // 입력받은 나머지가 13일때
	else if (a == 14) prs = 'E'; // 입력받은 나머지가 14일때
	else if (a == 15) prs = 'F'; // 입력받은 나머지가 15일때

	printf("%c",prs); // 나머지를 출력
}
int change(int a, int b) {	// a = 10진수의 수 b = 변환할 진수를 의미 
	
	int pass; //출력해야할 나머지 값을 저장할 임시 변수

	pass = a % b;  // 나머지를 저장

	if (a < b) {	// 재귀 함수에서 재귀함수가 종료될 조건을 입력 만약 a가 b보다 작으면 a%b의 값을 출력하고 재귀함수의 종료 시작
		print(pass);
		return 0;
	}
	a = a / b; // pass에 나머지를 저장했기에 새로운 change의 변수에 들어갈 a의 값을 a/b로 재설정(기존 a값에서 b의 값을 1번 나눈 이후의 몫)
	change(a, b); // 재귀함수를 의미하며 변환한 값들을 나눈 순서에 역으로 출력하기 위하여 재귀함수를 이용하여 역순으로 출력함.
	print(pass); // 재귀함수가 끝나고 마지막 나머지를 출력
	return 0;
}

int main(void) { // 메인 함수
	int num1 = 0, num2 = 0;	//scanf 함수를 이용하여 입력받을 2개의 수를 저장할 변수

	printf("변환할 10진수 입력 : ");	//변환할 10진수를 입력받는다 표시하는 printf
	scanf_s("%d", &num1);				//입력받은 값을 num1에 저장
	printf("변환할 진법 입력 (2-16) : ");//변환할 진법을 입력받는다 표시하는 printf
	scanf_s("%d", &num2);				//입력받은 값을 num2에 저장
	
	printf("\n%d의 %d진수 변환 값 : ",num1, num2); //바뀐 이후의 값을 출력 시작
	change(num1, num2);	//위에 작성한 함수를 이용하여 바뀐 수를 출력

	//과제 2에서 만든 함수 실행
	int a = 12, b = 20; // 죄대 공약수와 최소공배수에 들어갈 변수와 값들

	printf("\n");			//칸 띄우기
	int v = minS();			// 최소공배수 변수 입력받아서 실행하는 함수 return값은 최소공배수
	printf("%d\n", v);		// 최소공배수 함수의 return값 확인을 위한 코드
	int c = maxS();			//최대공약수 변수 입력받아서 실행하는 함수	 return 값은 최대공약수
	printf("%d\n", c);		//최대공약수 함수의 return값 확인을 위한 코드
	int d = primeS();		//입력받은 변수의 소수여부 확인 return값 참(1) ro 거짓(0) 
	printf("%d\n", d);		//소수 판별의 return값 확인 참(1) ro 거짓(0

	int e = minP(a, b);		//이미 입력한 변수를 통한 최소공배수 찾기 return 값은 최소공배수
	printf("%d\n", e);		//위 함수의 return값 확인 return = 60
	int f = maxP(a, b);		//이미 입력한 변수를 통한 최대공약수 찾기 return 값은 최대공약수
	printf("%d\n", f);		//위 함수의 return 값 확인 return = 4
	int g = primeP(17);		//소수판별 함수 확인 입력값은 17로 실행 return값 참(1) ro 거짓(0)
	printf("%d\n", g);		// 위 함수의 return값 확인 return = 1
}
