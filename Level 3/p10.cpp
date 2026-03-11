#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int result = (n * 2 + 20) / 5;
	if (result != 100) {
		printf("Magic");
	}
	return 0;
}