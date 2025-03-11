#include <stdio.h>

int main(void)
{
	int radius = 5;
	const double PI = 3.141592;//파이값은 불변의 값이기 때문에 대문자로 선언
	double area;
	double a;

	area = PI * radius * radius;
	a = 2 * PI * radius;

	printf("반지름 %d의 원의 넓이는 %.3f입니다.\n", radius, area);
	printf("원의 둘레는 %f입니다.\n", a);
	return 0;
}