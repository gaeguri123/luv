/*�����������̿��Ͻÿ�
�� ������ �Է¹޾� �� ���̿� ���Ե� ��� �������� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

��¿�
���۰� �Է� : _
�� �� �Է� : _

3���� 5������ ���� 12�Դϴ�.*/

#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	int start;
	int last;



	printf("���۰� �Է� : ");
	scanf("%d", &start);
	printf("���� �Է� : ");
	scanf("%d", &last);

	int n = (last - start) + 1;
	int essum = n*(start+last)/2;
	printf("%d���� %d������ ���� %d�Դϴ�.", start, last, essum);
	
	return 0;
}