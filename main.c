#include <stdio.h>

void fibonacci(int first, int second) {
	int next = first + second;

	if (next < 1000) {
		printf("%d ", next);
		fibonacci(second, next);
	}
	else
		return;
}

int main(void) {
	printf("0 1 ");
	fibonacci(0, 1);
	return 0;
}
