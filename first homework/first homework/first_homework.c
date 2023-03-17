//과제 1. scanf를 이용하여 변수를 받고 printf를 이용하여 출력하여라.
#include<stdio.h> // 기본 헤더파일을 불러와서 코딩에 사용할 함수를 불러옴

int main(void) {
	//변수 선언
	char name[20];			//입력받은 이름을 저장할 변수
	int birthday;			//입력받은 생년월일을 저장할 변수
	int id;					//입력받은 학번을 저장할 변수
	char department[50];	//입력받은 학과명을 저장할 변수 
	//scanf_s를 이용하여 변수에 값을 입력
	printf("본인의 이름을 입력하시오. : ");			//이름을 입력받는다고 출력
	scanf_s("%s", name, sizeof(name));				//입력받은 이름을 name이라는 변수에 저장한다.
	printf("본인의 생년월일을 입력하시오. : ");		//생년월일을 입력받는다고 출력
	scanf_s("%d", &birthday);						//입력받은 생일을 birthday라는 변수에 저장한다.
	printf("본인의 학번을 입력하시오. : ");			//학번을 입력받는다고 출력
	scanf_s("%d", &id);								//입력받은 학번을 id라는 변수에 저장한다.
	printf("본인의 학과명을 입력하시오. : ");		//학과명을 입력받는다고 출력
	scanf_s("%s", department, sizeof(department));	//입력받은 학과명을 department라는 변수에 저장한다
	//printf를 이용하여 입력받은 값을 출력
	printf("\n- 이름 : %s\n", name);		//입력받은 이름을 출력
	printf("- 생년월일 : %d\n", birthday);	//입력받은 생년월일을 출력
	printf("- 학번 : %d\n", id);			//입력받은 학번을 출력
	printf("- 학과명 : %s", department);	//입력받은 학과명을 출력

}