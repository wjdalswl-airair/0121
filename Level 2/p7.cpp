#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("a가b보다크다");
	}
	else {
		printf("b가a보다같거나크다");
	}

	return 0;
}