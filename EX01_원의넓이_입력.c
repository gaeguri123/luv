/*
* �Է� �޴� ���Ĺ���
* %d : ����
* %f : float�� �Ǽ�
* %lf(long float) : double�� �Ǽ�
* %c : ����
*/




#include <stdio.h>//���Ĵٵ���ǲ�ƿ�ǲ(printf����϶�,scanf�Է¹޾ƶ�)

#pragma warning (disable : 4996)//C���� 50���� ���� ������ ���� ��κ��� �Լ����� �������� ������ 4996�� ��� �߻��ȴ�.
                                //�� ��� �����ϱ� ���� �Ʒ��� ����� �߰��Ѵ�.

int main(void)
{
	int rad;
	const double PI = 3.141592;
	double area;
	double round;

	printf("���� �������� �Է� �ϼ���: ");
	scanf("%d", &rad); //scanf�� ������ �տ� �ݵ�� &�����ڸ� ����.
	                   //���Ĺ��ڸ���� �ٸ� ���ڴ� �ҿ����

	area = PI * rad * rad;
	round = 2 * PI * rad;

	printf("�������� %d�� ���� ���̴� %.3f�Դϴ�.\n", rad, area);
	printf("�������� %d�� ���� �ѷ��� %.3f�Դϴ�.\n", rad, round);

	return 0;
}