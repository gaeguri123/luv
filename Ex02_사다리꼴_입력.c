/*
* �ּ� ����: ctrl + k + c 
* �ּ� ����: ctrl + k + u
*/


#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int base;
	int top;
	int height;

	//printf("���� �Է� : ");
	//scanf("%d", &top);
	//printf("�غ� �Է� : ");
	//scanf("%d", &base);
	//printf("���� �Է� : ");
	//scanf("%d", &height);

	printf("���� �غ� ���̸� �������� �Է��ϼ���(@����) : ");
	scanf("%d@%d@%d", &top, &base, &height);
	
	//���̸� ���ϱ� ���� �Է��� �޾ƾ���

	double area = (base + top) * height / 2.0;


	printf("��ٸ����� ���̴� %.3f�̴�.\n", area);

	return 0;
}