/*
*  밑변을 3, 윗변을 4 높이를 5로 초기화 한 후,
*  사다리꼴의 넓이를 구하는 프로그램을 작성해보자.
* 
*  사다리꼴의 넓이 = ( 윗변 + 밑변 ) * 높이 /2
*/


#include <stdio.h>

int main(void)
{
	int base = 3;
	int top = 4;
	int height = 5;

	//정수 나눗셈은 몫을 구한다.
	//최소 한 개 이상의 실수가 연산식에 포함되어야 소수점 이하까지 계산할 수 있다.
	double area = (base + top) * height / 2.0;

	printf("사다리꼴의 넓이는 %.3f이다.\n", area);

	return 0;
}