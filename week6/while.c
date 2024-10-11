#include <stdio.h>

int main(void) {
	//for문 배웠을 때 sum = sum + num 했지만
	//while문 배울 때는 sum = sum * num으로 한다
	int sum1 = 0; //첫 시도
	int sum2 = 1; //두 번째 시도
	int sum3 = 53; //세 번째 시도

	int count = 1;

	while (count <= 50) {
		printf("sum(%d) * count(%d) = ", sum3, count);
		sum3 = sum3 * count;
		printf("%d\n", sum3);

		count++;
	}
	printf("\nTotal : count = %d, sum = %d", count, sum3);

	return 0;
}