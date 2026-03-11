#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%d%d%d%d",a,a,a,a);
	}
	else {
		printf("%d%d%d%d", b,b,b,b);
	}

	return 0;
}