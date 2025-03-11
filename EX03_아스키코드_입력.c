#include <stdio.h>

#pragma warning (disable :4996)

int main()
{
	char a = 'a', b = 'b', c = 'c';

	printf("문자 3개 입력 (공백구분) : \n");
	scanf("%c %c %C", &a, &b, &c);

	printf("문자 a => %d", a);
	printf("문자 b => %d", b);
	printf("문자 c => %d", c);


	return 0;
}