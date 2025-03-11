
#include <stdio.h>

int main()
{
	//상수(const) : 고정된 값을 저장하는 공간
	//             한번 값을 설정하면 변경할 수 없다.
	//             대문자를 기초로 작성한다. pascal표기법.
	//             MY_AGE, YOUR_AGE

	const int con = 5;
	//상수는 반드시 선언하면서 초기화해야한다. 선언된 공간에는 쓰레기값으로 채워지기 때문이다.
	//con = 55; 에러 상수의 값은 변경이 불가능하다.
	
	//변수(variavle) : 변하는 값을 저장하는 공간
	//                소문자를 기초로 작성한다. camel표기법을 쓴다.
	//                int myAge, yourAge
	int var = 546;
	var = -12;
	var = 777;

	printf("변수 = %d\n", var);
	return 0;
}