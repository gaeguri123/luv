/*
* ���Ĺ���
* 
* 1. %d(demical) : 10�� ������ ���
* 2. %f(float) : �����Ҽ���(�Ҽ��� ���� 6�ڸ�) ���
* 3. %c(character) : ���� ���
* 
*/#include <stdio.h>

int main(void)
{
	//���� ������ �׻� ���ο� �;� �Ѵ�.
	//���� ���� : ������ �Ҵ� �޴� �۾�
	int num, result;
	double d = 46.274; // ���� ���� �� �ʱ�ȭ �۾����� ����
	char ch = 'd';//���� d �� ��������ǥ

	//���� �ʱ�ȭ : ���� �����ϴ� �۾�
	num = 1234;
	result = num * 234;

	printf("num�� �����̸�, ���� %d�Դϴ�.\n",num);
	printf("%d * 234 = %d\n", num, result);
	printf("�Ǽ� d = %f\n", d);
	printf("�Ǽ� d = %.2f\n", d);
	printf("�Ǽ� d = %.1f\n", d); //�Ҽ��� 1�ڸ� �ݿø�
	printf("���� ch = %c, ����ch�� �ƽ�Ű �ڵ��? %d\n", ch, ch);


	return 0;
}