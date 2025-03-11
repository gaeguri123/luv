/*
* 입력 받는 서식문자
* %d : 정수
* %f : float형 실수
* %lf(long float) : double형 실수
* %c : 문자
*/




#include <stdio.h>//스탠다드인풋아웃풋(printf출력하라,scanf입력받아라)

#pragma warning (disable : 4996)//C언어는 50년이 넘은 오래된 언어로 대부분의 함수에서 안정성의 이유로 4996의 경고가 발생된다.
                                //이 경고를 방지하기 위해 아래의 명령을 추가한다.

int main(void)
{
	int rad;
	const double PI = 3.141592;
	double area;
	double round;

	printf("원의 반지름을 입력 하세요: ");
	scanf("%d", &rad); //scanf는 변수명 앞에 반드시 &연산자를 쓴다.
	                   //서식문자말고는 다른 문자는 소용없음

	area = PI * rad * rad;
	round = 2 * PI * rad;

	printf("반지름이 %d인 원의 넓이는 %.3f입니다.\n", rad, area);
	printf("반지름이 %d인 원의 둘레는 %.3f입니다.\n", rad, round);

	return 0;
}