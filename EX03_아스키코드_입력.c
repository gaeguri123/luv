#include <stdio.h>

#pragma warning (disable :4996)

int main()
{
	char a = 'a', b = 'b', c = 'c';

	printf("���� 3�� �Է� (���鱸��) : \n");
	scanf("%c %c %C", &a, &b, &c);

	printf("���� a => %d", a);
	printf("���� b => %d", b);
	printf("���� c => %d", c);


	return 0;
}