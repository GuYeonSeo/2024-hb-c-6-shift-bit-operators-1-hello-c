#include <stdio.h>

#define FLAG1 0x01  // 0000 0001
#define FLAG2 0x02  // 0000 0010
#define FLAG3 0x04  // 0000 0100
#define FLAG4 0x08  // 0000 1000

int main(void) {
	unsigned char status = 0;

	status |= FLAG1;  // 0000 0001
	printf("After setting FLAG1 : %x\n", status);

	status |= FLAG2;  // 0000 0010
	printf("After setting FLAG2 : %x\n", status);

	status &= ~FLAG1; // 1111 1110 (~FLAG1)
	printf("After clearing FLAG1 : %x\n", status);

	status ^= FLAG3; //3번째 비트가 1이면 0으로, 0이면 1로 설정
	printf("After togging FALG3 : %x\n", status);

	status ^= FLAG4; //3번째 비트가 1이면 0으로, 0이면 1로 설정
	printf("After togging FALG4 : %x\n", status);

	//비트 확인하기
	if (status & FLAG1) printf("FLAG1 is set. "); //출력하지 않는다
	if (status & FLAG2) printf("FLAG2 is set. ");
	if (status & FLAG3) printf("FLAG3 is set. ");
	if (status & FLAG4) printf("FLAG4 is set. ");

	return 0;
}