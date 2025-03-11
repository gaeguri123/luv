/*
* 마일(mile)을 3으로 초기화 한 후 킬로미터()단위로 바꾸는 프로그램을 작성해보자
* 단, 최소 한 개 이상의 상수를 선언 하시오.
* (1마일 = 1.609344킬로미터)
* 
* [출력 예]
* 3mile은 4.828032km 입니다.
*/

#include <stdio.h>

int main()
{
	const double A = 1.609344;// 상수 변수의 이름은 대문자로 선언
	int b = 3;
	double c = A * b;

	printf("%dmile은 %fkm 입니다.\n", b, c);
	return 0;
}