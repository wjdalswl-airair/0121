#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);

	if (a > 3) {
		a++;
		printf("%d", a);
	}
	else {
		a--;
		printf("%d", a--);
	}
	return 0;
}