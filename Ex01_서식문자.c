/*
* 서식문자
* 
* 1. %d(demical) : 10진 정수를 출력
* 2. %f(float) : 고정소수점(소수점 이하 6자리) 출력
* 3. %c(character) : 문자 출력
* 
*/#include <stdio.h>

int main(void)
{
	//변수 선언은 항상 선두에 와야 한다.
	//변수 선언 : 공간을 할당 받는 작업
	int num, result;
	double d = 46.274; // 변수 선언 시 초기화 작업까지 수행
	char ch = 'd';//문자 d 꼭 작은따옴표

	//변수 초기화 : 값을 대입하는 작업
	num = 1234;
	result = num * 234;

	printf("num은 정수이며, 값은 %d입니다.\n",num);
	printf("%d * 234 = %d\n", num, result);
	printf("실수 d = %f\n", d);
	printf("실수 d = %.2f\n", d);
	printf("실수 d = %.1f\n", d); //소수점 1자리 반올림
	printf("문자 ch = %c, 문자ch의 아스키 코드는? %d\n", ch, ch);


	return 0;
}