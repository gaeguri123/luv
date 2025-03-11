/*
* 주석 설정: ctrl + k + c 
* 주석 해제: ctrl + k + u
*/


#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int base;
	int top;
	int height;

	//printf("윗변 입력 : ");
	//scanf("%d", &top);
	//printf("밑변 입력 : ");
	//scanf("%d", &base);
	//printf("높이 입력 : ");
	//scanf("%d", &height);

	printf("윗변 밑변 높이를 연속으로 입력하세요(@구분) : ");
	scanf("%d@%d@%d", &top, &base, &height);
	
	//넓이를 구하기 전에 입력을 받아야함

	double area = (base + top) * height / 2.0;


	printf("사다리꼴의 넓이는 %.3f이다.\n", area);

	return 0;
}