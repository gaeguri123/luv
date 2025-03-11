/*A상점의 빅 세일 기간으로 모든 물건은 가격의 25%를 할인해서 판매 한다.
단 3500원의 별도의 배송비가 발생한다.
물건 가격을 입력 받아 배송비를 포함한 결제 금액을 출력 하시오.
[출력 예
물건 가격 : 97200
회원님의 최종 결제금액(배송비 포함)은 76400원 입니다.*/

#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	int goods_price;
	int total_price;

	printf("물건가격 : ");
	scanf("%d", &goods_price);

	total_price = goods_price * 0.75 + 3500;

	printf("회원님의 최종 결제금액(배송비  포함)은 %d입니다", total_price);
	
	return 0;
}