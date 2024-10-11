#include <stdio.h>

int main(void) {
	int num = 8;

	//왼쪽 쉬프트 연산자를 사용하여 곱하기
	int mulBy2 = num << 1; //num * 2
	int mulBy4 = num << 2; //num * 4
	int mulBy8 = num << 3; //num * 8

	//오른쪽 쉬프트 연산자를 사용하여 나누기
	int divBy2 = num >> 1; //num / 2
	int divBy4 = num >> 2; //num / 4
	int divBy8 = num >> 3; //num / 8

	//결과 출력하기
	printf("Original : %d\n", num);
	printf("num * 2 (num << 1) : %d\n", mulBy2);
	printf("num * 4 (num << 2) : %d\n", mulBy4);
	printf("num * 8 (num << 3) : %d\n", mulBy8);
	printf("num / 2 (num >> 1) : %d\n", divBy2);
	printf("num / 4 (num >> 2) : %d\n", divBy4);
	printf("num / 8 (num >> 3) : %d\n", divBy8);

	return 0;
}