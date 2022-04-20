#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//int는 반환형식을 지정해줌. 정수형식만 반환가능
//	//main은 함수이름
//	//return은 함수가 끝났다는 것을 알려준다
//	printf("문자열 출력하는 함수\n"); //문자열만 가능
//	printf("두번째 문장법\n");
//
//	// \n \b->커서이동 \r->커서가 맨 앞으로 이동 \a
//	// 정수: %d 실수:%f 문자:%c 문자열:%s
//	printf("내 나이:%d ",3);
//	printf("%f", 3)
//	singed int b,c;
//	int d;
//	unsigned int e; //양수만! 0~2^61-1
//	e = 0;
//	
//	printf(s); // \0를 추가해야 문자열이 된다
//	return 0;
//}
//
//int main()
//{
//	int a, b;
//	a = 10;
//	b = 20;
//
//	printf("%d", b); 
//	scanf("%d", b); //&: 변수의 주소값을 가져오는 것. scanf는 입력해주는 함수
//
//}

int main()
{
	int a;
	printf("<사용자 기본정보>\n");
	//printf("이름을 입력하시오. ");
	//scanf("%s", 홍길동);
	printf("나이를 입력하세요.");
	scanf("%d",&a);
	return 0;
}