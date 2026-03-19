#include <stdio.h>
int magic(int a) {
	if (a % 2 == 0) {
		if ((a / 10 + a % 10) % 5 == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {
	// Please write your code here.
	int n;
	scanf("%d", &n);

	if (magic(n) == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	

	return 0;
}