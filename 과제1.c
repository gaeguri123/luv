/*A������ �� ���� �Ⱓ���� ��� ������ ������ 25%�� �����ؼ� �Ǹ� �Ѵ�.
�� 3500���� ������ ��ۺ� �߻��Ѵ�.
���� ������ �Է� �޾� ��ۺ� ������ ���� �ݾ��� ��� �Ͻÿ�.
[��� ��
���� ���� : 97200
ȸ������ ���� �����ݾ�(��ۺ� ����)�� 76400�� �Դϴ�.*/

#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	int goods_price;
	int total_price;

	printf("���ǰ��� : ");
	scanf("%d", &goods_price);

	total_price = goods_price * 0.75 + 3500;

	printf("ȸ������ ���� �����ݾ�(��ۺ�  ����)�� %d�Դϴ�", total_price);
	
	return 0;
}