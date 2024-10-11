#include <stdio.h>

int main(void) {
	int step, i;

	for (step = 1; step <= 9; step++) { //외부 반복문
		printf("=== Group %d ===\n", step);
		for (i = 1; i <= 9; i++) { //내부 반복문
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}

	return 0;
}