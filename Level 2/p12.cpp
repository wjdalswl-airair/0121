#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c >= a * b*c) {
		printf("행운의 수");
	}
	else {
		printf("소소한 수");
	}

	return 0;
}