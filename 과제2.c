/*등차수열을이용하시오
두 정수를 입력받아 그 사이에 포함된 모든 정수들의 합을 구하는 프로그램을 작성하시오.

출력예
시작값 입력 : _
끝 값 입력 : _

3부터 5사이의 합은 12입니다.*/

#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	int start;
	int last;



	printf("시작값 입력 : ");
	scanf("%d", &start);
	printf("끝값 입력 : ");
	scanf("%d", &last);

	int n = (last - start) + 1;
	int essum = n*(start+last)/2;
	printf("%d부터 %d사이의 합은 %d입니다.", start, last, essum);
	
	return 0;
}