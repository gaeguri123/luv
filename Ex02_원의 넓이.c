#include <stdio.h>

int main(void)
{
	int radius = 5;
	const double PI = 3.141592;//���̰��� �Һ��� ���̱� ������ �빮�ڷ� ����
	double area;
	double a;

	area = PI * radius * radius;
	a = 2 * PI * radius;

	printf("������ %d�� ���� ���̴� %.3f�Դϴ�.\n", radius, area);
	printf("���� �ѷ��� %f�Դϴ�.\n", a);
	return 0;
}